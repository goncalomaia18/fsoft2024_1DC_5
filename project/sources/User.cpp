User::User(string& pUsername, string& pPassword) {
    setUsername(pUsername);
    setPassword(pPassword);
}

void User::setName(string pName) {
    this->name = std::move(pName);
}

string User::getUsername() const {
    return this->username;
}

string User::getPassword() {
    return this->password;
}

string User::getName() {
    return this->name;
}

void User::setPassword(string &pPassword) {
    this->password = pPassword;
}

void User::setUsername(string &pUsername) {
    this->username = pUsername;
}

User::User() {

}
