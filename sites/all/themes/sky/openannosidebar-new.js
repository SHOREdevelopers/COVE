jQuery(function ($) {
                   $.i18n.load(i18n_dict);
               
                    var annotator = $('body').annotator().annotator().data('annotator');
                    var propietary = 'demoUser';
                    annotator.addPlugin('Permissions', {
                        user: propietary,
                        permissions: {
                            'read': [propietary],
                            'update': [propietary],
                            'delete': [propietary],
                            'admin': [propietary]
                     },
                     showViewPermissionsCheckbox: true,
                     showEditPermissionsCheckbox: false
                    });
                  $('body').annotator().annotator('addPlugin', 'RichEditor');
                  $('body').annotator().annotator('addPlugin', 'Categories',{
                           errata:'annotator-hl-errata',
                           destacat:'annotator-hl-destacat',
                           subratllat:'annotator-hl-subratllat' }
                     );
                  $('body').annotator().annotator('addPlugin', 'AnnotatorViewer');
                  //Annotation scroll
                  $('#anotacions-uoc-panel').slimscroll({height: '100%'});
               });