var username;
var password;

function s_username_valid(username) {
    var username_regex = /^[a-z].{5,9}/;
    var username_valid = username.match(username_regex);
    return true;
}

function s_password_valid(password) {
    var password_regex = /^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])(?=.{10})/;
    var password_valid = password.match(password_regex);
    return true;
}