// Extra function to control menu state from anywhere on your page/ inside your script
function expandoffcanvasmenu(action){ //param: 'open', 'close', or empty to toggle menu state
    var togglebox = document.getElementById("togglebox")
    var newstate = (action == 'open')? true : (action == 'close')? false : !togglebox.checked
    togglebox.checked = newstate
}
