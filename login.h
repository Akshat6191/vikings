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

        std::string getUserName() const ;
        std::string getEmail() const;
        std::string getPassword() const;

        void setUserName(const std::string usname);
        void setEmail (const std::string eml);
        void setPassword (const std::string psswrd);

        bool checkPassword(const std::string& attempt) const;
    virtual ~logIn() {}
};