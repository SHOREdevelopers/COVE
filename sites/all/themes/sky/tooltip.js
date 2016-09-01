var id = "#tt";
var $elem = $(id);

$elem.on("mouseenter", function (e) {
    e.stopImmediatePropagation();
});

$elem.tooltip({ items: id, content: "Displaying on click"});

$elem.on("click", function (e) {
    $elem.tooltip("open");
});


$elem.on("mouseleave", function (e) {
    e.stopImmediatePropagation();
});


$(document).mouseup(function (e) {
    var container = $(".ui-tooltip");
    if (! container.is(e.target) && 
        container.has(e.target).length === 0)
    {
        $elem.tooltip("close");
    }
});
 No newline at end of file
