#pragma once
#include<iostream>
#include<string>

class Person {
    protected:
        std::string name;
        std::string email;
    public:
        Person(const std::string n , const std::string e ) : name (n) , email(e) {}

        virtual logIn() const = 0;
        virtual 
}