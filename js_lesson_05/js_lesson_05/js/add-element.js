//Create a  new elements and store it in a variable.
var newEl = document.createElement('li');

//Create a text node anf store it in a variable
var newText = document.createTextNode('quinoa');

//Attach the new text node to the elements.
newEl.appendChild(newText);

//Find the position where the new element should be added.
var position = document.getElementsByClassName('ul')[0];

//Insert the new elements onto its position.
position.appendChild(newEl);