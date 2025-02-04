#ifndef DATALOG_PROGRAM_H
#define DATALOG_PROGRAM_H

#include "Predicate.h"
#include "Rule.h"
#include <sstream>
#include <vector>

class DatalogProgram
{
private:
    std::vector<Predicate> _schemes;
    std::vector<Predicate> _facts;
    std::vector<Rule> _rules;
    std::vector<Predicate> _queries;
    std::vector<std::string> _domain;
public:
    DatalogProgram() {}
    DatalogProgram(std::vector<Predicate> _schemes, std::vector<Predicate> _facts, std::vector<Rule> _rules, std::vector<Predicate> _queries, std::vector<std::string> _domain)
        : _schemes(_schemes), _facts(_facts), _rules(_rules), _queries(_queries), _domain(_domain) {}

    std::vector<Predicate> schemes() const
    {
        return _schemes;
    }

    std::vector<Predicate> facts() const
    {
        return _facts;
    }

    std::vector<Rule> rules() const
    {
        return _rules;
    }

    std::vector<Predicate> queries() const
    {
        return _queries;
    }

    std::vector<std::string> domain() const
    {
        return _domain;
    }

    std::string schemesToString() const
    {
        std::stringstream out;
        out << "_schemes(" << _schemes.size() << "):" << std::endl;
        for (unsigned int i = 0; i < _schemes.size(); i++)
        {
          out << "  " << _schemes.at(i).toString() << std::endl;
        }
        return out.str();
    }

    std::string factsToString() const
    {
        std::stringstream out;
        out << "_facts(" << _facts.size() << "):" << std::endl;
        for (unsigned int i = 0; i < _facts.size(); i++)
        {
          out << "  " << _facts.at(i).toString() << "." << std::endl;
        }
        return out.str();
    }

    std::string rulesToString() const
    {
        std::stringstream out;
        out << "_rules(" << _rules.size() << "):" << std::endl;
        for (unsigned int i = 0; i < _rules.size(); i++)
        {
            out << "  " << _rules.at(i).toString() << std::endl;
        }
        return out.str();
    }

    std::string queriesToString() const
    {
        std::stringstream out;
        out << "_queries(" << _queries.size() << "):" << std::endl;
        for (unsigned int i = 0; i < _queries.size(); i++)
        {
            out << "  " << _queries.at(i).toString() << "?" << std::endl;
        }
        return out.str();
    }

    std::string domainsToString() const
    {
        std::stringstream out;
        out << "Domain(" << _domain.size() << "):" << std::endl;
        for (unsigned int i = 0; i < _domain.size(); i++)
        {
          out << "  " << _domain.at(i) << std::endl;
        }
        return out.str();
    }

    std::string toString() const
    {
        std::stringstream out;
        out << schemesToString() << factsToString() << rulesToString() << queriesToString() << domainsToString();
        return out.str();
    }

};

#endif // DATALOG_PROGRAM_H
