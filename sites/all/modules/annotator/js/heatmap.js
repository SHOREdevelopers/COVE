(function($) {
  var __bind = function(fn, me){ return function(){ return fn.apply(me, arguments); }; },
    __hasProp = Object.prototype.hasOwnProperty,
    __extends = function(child, parent) { for (var key in parent) { if (__hasProp.call(parent, key)) child[key] = parent[key]; } function ctor() { this.constructor = child; } ctor.prototype = parent.prototype; child.prototype = new ctor; child.__super__ = parent.prototype; return child; };

  Annotator.Plugin.Heatmap = (function(_super) {

    __extends(Heatmap, _super);

    Heatmap.prototype.html = {
      element: "<svg class=\"annotator-heatmap\"\n     xmlns=\"http://www.w3.org/2000/svg\"\n     xmlns:xlink=\"http://www.w3.org/1999/xlink\">\n   <defs>\n     <linearGradient id=\"heatmapGradient\"\n                     x1=\"0%\" y1=\"0%\"\n                     x2=\"0%\" y2=\"100%\">\n     </linearGradient>\n     <filter id=\"heatBlend\">\n       <feGaussianBlur stdDeviation=\"3\"><feGaussianBlur>\n     </filter>\n   </defs>\n   <rect x=\"0\" y=\"0\" width=\"100%\" height=\"100%\"\n         fill=\"url(#heatmapGradient)\"\n         filter=\"url(#heatBlend)\" />\n</svg>",
      options: {
        message: Annotator._t("Sorry, some features of the Annotator failed to load.")
      }
    };

    Heatmap.prototype.pluginInit = function() {
      var _this = this;
      this.heatmap = $(this.html.element);
      this.heatmap.appendTo(this.annotator.wrapper);
      if (!((typeof d3 !== "undefined" && d3 !== null) || (this.d3 != null))) {
        console.error('d3.js is required to use the heatmap plugin');
      }
      if (!(typeof d3 !== "undefined" && d3 !== null)) {
        return setTimeout(function() {
          return $.getScript(_this.d3, function() {
            _this._setupListeners();
            return _this.updateHeatmap();
          }).error(function() {
            return Annotator.showNotification(this.options.message);
          });
        }, 0);
      }
    };

    function Heatmap(element, options) {
      this.updateHeatmap = __bind(this.updateHeatmap, this);      Heatmap.__super__.constructor.call(this, element, options);
      this.d3 = options.d3;
    }

    Heatmap.prototype._setupListeners = function() {
      var event, events, _i, _len;
      events = ['annotationsLoaded', 'annotationCreated', 'annotationUpdated', 'annotationDeleted'];
      for (_i = 0, _len = events.length; _i < _len; _i++) {
        event = events[_i];
        this.annotator.subscribe(event, this.updateHeatmap);
      }
      this;
      return $(window).resize(this.updateHeatmap);
    };

    Heatmap.prototype._colorize = function(v) {
      var h, l, s;
      v = v + 1;
      h = d3.scale.log().domain([1, 1.02, 1.5, 1.5, 2]).range([300, 300, 360, 0, 60]);
      s = d3.scale.log().domain([1, 1.01, 2]).range([0, 0.5, 1]);
      l = d3.scale.log().domain([1, 1.02, 1.1, 2]).range([0.75, 0.25, 0.375, 0.5]);
      return d3.hsl(h(v), s(v), l(v)).toString();
    };

    Heatmap.prototype.updateHeatmap = function() {
      var annotations, context, heatmap, max, points, scale, _, _ref,
        _this = this;
      if (typeof d3 === "undefined" || d3 === null) return;
      context = this.annotator.wrapper.context;
      scale = context.scrollHeight / window.innerHeight;
      annotations = this.annotator.element.find('.annotator-hl:visible');
      _ref = annotations.map(function() {
        return {
          el: this,
          top: $(this).offset().top / context.scrollHeight,
          height: $(this).innerHeight() / context.scrollHeight
        };
      }).get().reduce(function(acc, m) {
        return acc.concat([[m.top, 0], [m.top + 0.5 * m.height, 1], [m.top + m.height, -1]]);
      }, []).sort().reduce(function(acc, n) {
        var count, d, last, offset, points, y;
        y = n[0], d = n[1];
        points = acc.points;
        last = points[points.length - 1];
        offset = last.offset, count = last.count;
        count += d;
        if (y === offset) {
          last.count = count;
        } else {
          points.push({
            offset: y,
            count: count
          });
        }
        if (count > acc.max) acc.max = count;
        return acc;
      }, {
        points: [
          {
            offset: 0,
            count: 0
          }
        ],
        max: 1
      }), points = _ref.points, _ = _ref._, max = _ref.max;
      d3.select(this.heatmap.get(0)).attr("height", context.scrollHeight);
      heatmap = d3.select(this.heatmap.find('#heatmapGradient').get(0)).selectAll('stop').data(points, function(p) {
        return p.offset;
      });
      heatmap.enter().append("stop").attr("stop-color", this._colorize(0)).transition().duration(1000).attr("stop-color", function(p) {
        return _this._colorize(p.count / max);
      });
      heatmap.order().attr("offset", function(p) {
        return p.offset;
      }).transition().duration(250).attr("stop-color", function(p) {
        return _this._colorize(p.count / max);
      });
      return heatmap.exit().transition().duration(1000).attr("stop-color", this._colorize(0)).remove();
    };

    return Heatmap;

  })(Annotator.Plugin);

})(jQuery);
