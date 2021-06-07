var elUsername = document.getElementById('username'); //Username input
var elMsg = document.getElementById('feedback');//Error msg element

function checkUsernamne(minlength) {//Declare function
    if (Username.value.length < minlength) {//If username too short
        //Sett the error message
        elMsg.innerHTML = 'Username must be' + minlength + ' characters of more';
    } else {//Otherwise
        elMsg.innerHTML = '';//Clear msg
    }
}
elUsername.addEventListener('blur', function () {//When it losses focus
    checkUsernamne(5); //Pass argument here
}, false); //Regular expression - bieu thuc quy tac.