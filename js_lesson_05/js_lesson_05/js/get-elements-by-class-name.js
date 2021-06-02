var elements = document.getElementById('hot'); //Find hot items


if (elements.lenght > 2) { //If 3 or more are found

    var el = elements[2]; //Select the third onr from the Nodelist
    el.className = 'cool'; //Change the value of its class attribute

}