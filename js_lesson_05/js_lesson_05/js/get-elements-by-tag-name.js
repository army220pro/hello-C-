var elements = document.getElementById('li'); //Find <li> elements

if (elements.length > 0) {//If 1 or more are found

    var el = elements[0]; //Select the first one using array syntax
    elements.className = 'cool';//Change the value of the class attribute

}