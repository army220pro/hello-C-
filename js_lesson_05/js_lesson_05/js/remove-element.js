//Store the elements to be removed in a variable.
var removeEl = document.getElementsByClassName('li')[3];

//Find the element which contains the elements to be removed.
var containerEl = document.getElementsByClassName('ul')[0];

//Remove the elements.
containerEl.removeChild(removeEl);