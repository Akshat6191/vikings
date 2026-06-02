#include "login.h"

logIn::logIn() {}
logIn::logIn(const std::string Un , const std::string em , const std::string p) : userName(Un) , email(em) , password(p) {}

logIn::logIn(const logIn& o) : userName(o.userName) , email(o.email) ,  password(o.password) {}


logIn& logIn::operator = (const logIn& o) {
    if(this != &o) {
        userName = o.userName;
        email = o.email;
        password = o.password;
    }
    return *this;
}

std::string logIn::getUserName()const {return userName;}
std::string logIn::getEmail() const {return email;}
std::string logIn::getPassword() const {return password;}
void logIn::setUserName(const std::string usname) { userName = usname; }
void logIn::setEmail(const std::string eml) {email = eml;}
void logIn::setPassword (const std::string psswrd) {password = psswrd;}

bool logIn::checkPassword(const std::string& attempt) const {
    return attempt == password;
}
