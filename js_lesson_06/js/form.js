var elFrom, elSelectPackage, elPackageHint, elTerms, elTermsHint;
elFrom                = document.getElementById('formSignup');
elSelectPackage       = document.getElementById('package');
elPackageHint         = document.getElementById('packageHintc');
elTerms               = document.getElementById('terms');
elTermsHint           = document.getElementById('termsHint');


function packageHint() {
    var pack = this.options[this.selectedIndex].value;
    if (pack === 'monthly') {
        elPackageHint.innerHTML = 'Save $10 if you pay for year!';
    } else {
        elPackageHint.innerHTML = 'Wise choice!';
    }
}
function checkTerms(event) {
    if (!elTerms.checked) {
        elTermsHint.innerHTML = 'You must agree to the terms';
    }
}

elFrom.addEventListener('submit',checkTerms, false);
elSelectPackage.addEventListener('change', packageHint, false);