#ifndef NOMATCHINGCARDEXCEPTION_H
#define NOMATCHINGCARDEXCEPTION_H

#include <iostream>

class NoMatchingCardException : public std::exception
{
private:
    std::string _msg; 
public:
    
    std::string what() {
       return  _msg;
    }

    NoMatchingCardException(std::string msg) : _msg(msg) {}
    ~NoMatchingCardException() {}
};

#endif // NOMATCHINGCARDEXCEPTION_H
