//Select the starting point anf find its siblings.
var startItem = document.getElementById('two');
var prevItem = startItem.previousSibling;
var nextItem = startItem.nextSibling;

//Changed the value of the sibling ' class attribute.
prevItem.className = 'complete';
nextItem.className = 'cool';

