#ifndef PREDICATE_H
#define PREDICATE_H
#include "../lexer/Token.h"
#include <iostream>
#include <string>
#include <sstream> 
#include <fstream>
#include <cctype>
#include <vector>

class Predicate
{
private:
	std::string type;
    std::string id;
    std::vector<std::string> list;
public:
    Predicate(std::string type, std::string id, std::vector<std::string> list) : type(type), id(id), list(list) {}
    
    std::string toString()
    {

    }
	
};

#endif // PREDICATE_H
