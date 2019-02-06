#ifndef RULE_H
#define RULE_H
#include "../lexer/Token.h"
#include <iostream>
#include <string>
#include <sstream> 
#include <fstream>
#include <cctype>
#include <vector>

class Rule
{
private:
	Predicate predicateHead;
    std::vector<Predicate> predicateList;
public:
    Rule(Predicate predicateHead, std::vector<Predicate> predicateList) : predicateHead(predicateHead), predicateList(predicateList) {}

	std::string toString()
    {

    }
};

#endif // RULE_H
