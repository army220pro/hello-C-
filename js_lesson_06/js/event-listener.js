function checkusername() {
    var elMsg = document.getElementById('feedback');
    if (this.value.length < 5) {
        elMsg.textContent = 'Username must be character or more';
    } else {
        elMsg.textContent = '';
    }
}

var elUsername = document.getElementById('username');

elUsername.addEventListener('blur',checkusername, 'false');