#pragma once
#include<iostream>
#include<string>

class logIn {
    protected:
        std::string userName;
        std::string email;
        std::string password;
    public:
        logIn();
        logIn(const logIn& lgin);
        logIn& operator = (const logIn& o);
        
        logIn(const std::string Un , const std::string  em, const std::string p) : userName(Un) , email(em) , password(p) {}

        std::string getUserName() const {return userName;}
        std::string getEmail() const{return email;}
        std::string getPassword() const {return password;}

        std::string setUserName(const std::string usname);
        std::string setEmail (const std::string email);
        std::string setpassword (const std::string password);

        bool checkPassword(const std::string& attempt) const;

};