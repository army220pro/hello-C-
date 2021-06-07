function checkUsername() {    //Declare function
    var elMsg = document.getElementById('feedback'); //Get feedback element
    var elUsername = document.getElementById('username'); //get username input
    if (elUsername.value.lenght < 5) {//If username too short
        elMsg.textContent = 'Usernamr must 5 character or more';//Set msg
    } else { //Otherwise
        elMsg.textContent = '';//Clear message
    }
}