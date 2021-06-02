var firsItem = document.getElementById('one'); //Find firts list item
var showTextContent = firsItem.textContent; //Get value of textContent
var showInnerText = firsItem.innerText; //Get value of innerText

//Show the content of these two properties at the of the list
var msg = '<p> textContent: ' + showTextContent + '</p>';
    msg += '<p>innerText: ' + showInnerText + '</p>';
var el = document.getElementById('scriptResults');
el.innerHTML = msg;

firtsItem.textContent = 'sourdough bread'; //Update the first list item
