 // Wait for the page to load first
 
 // Wait for the page to load first
        window.addEventListener('load',function(){
        window.addEventListener('mouseover', function() {
	var $lba= document.querySelectorAll('.annotator-hl');
	function selectAnnos() {
		expandoffcanvasmenu('open'); return false;
        }

// Assign a click event handler to every element:
	for(var i=0; i<$lba.length; i++) {
   		$lba[i].addEventListener('click', selectAnnos, false);
		}
   }); 
}); 

/*//window.addEventListener('load',function(){
        window.addEventListener('click', function() {
        
	var $lba= document.querySelectorAll('.annotator-hl');
	function selectAnnos2() {
		expandoffcanvasmenu('open'); return false;
        }

// Assign a click event handler to every element:
	for(var i=0; i<$lba.length; i++) {
   		$lba[i].addEventListener('click', selectAnnos2, false);
		}
 }); 
 // }); 
 */

// Extra function to control menu state from anywhere on your page/ inside your script
function expandoffcanvasmenu(action){ //param: 'open', 'close', or empty to toggle menu state
    var togglebox = document.getElementById("togglebox")
    var newstate = (action == 'open')? true : (action == 'close')? false : !togglebox.checked
    togglebox.checked = newstate
}
 