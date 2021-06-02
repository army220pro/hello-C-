//Select the starting point anf find its children
var startItem = document.getElementsByClassName('ul')[0];
var firtsItem = startItem.firstChild;
var lastItem = startItem.lastChild;

//Changed the value of the children's class attributes.
firtsItem.className = 'complete';
lastItem.className = 'cool';