var elUsername = document.getElementById('username'); //Get username input
var elMsg = document.getElementById('feedback');//Get feedback element

function checkUsername(minlength) {
    if (elUsername.value.length) {
        elMsg.innerHTML = 'Username must be ' + minlength + 'character or more';
    } else {
        elMsg.innerHTML = '';
    }
}

if (elUsername.addEventListener) {
    elUsername.addEventListener('blur', function (){
        checkUsername(5);
    }, false);
} else {
    elUsername.attachEvent('onblur', function (){
        checkUsername(5);
    });
}