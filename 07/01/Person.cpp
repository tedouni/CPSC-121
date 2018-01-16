//
//  Person.cpp
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Person.h"
//Person:: Person(): Person ("no name", "no address","no ssn" ) {}
Person:: Person( const string& name, const string& address, const string& ssn)
: _name(name), _address(address),_ssn(ssn) {}

Person:: Person( const Person& pOther)
:_name(pOther._name), _address(pOther._address),_ssn(pOther._ssn){}


Person& Person:: operator=(const Person& pOther)
{
    if(this!= &pOther)
    {   this->_name = pOther._name;
        this->_address = pOther._address;
        this->_ssn =pOther._ssn;
        
        
    }
    
    return *this;
}
string Person:: name() const
{
    return _name;
}

void Person:: name( const string& name)
{
    _name = name;
}

string Person:: address() const
{
    return _address;
}

void Person:: address(const string& address)
{
    _address = address;
}

string Person:: ssn() const
{
    return _ssn;
}
void Person::ssn(const string& ssn)
{
    _ssn=ssn;
}

bool Person:: operator == (const Person& pOther) const
{
    return _name == pOther._name &&
    _address     == pOther._address &&
    _ssn         == pOther._ssn;
}

bool Person:: operator != (const Person& pOther) const
{
    return !(*this==pOther);
}

ostream& operator<<(ostream& os, const Person& p)
{
    return os << "Person[name = "<<p._name<<",address ="<<p._address<<",ssn="<<p._ssn<<"]";
    
}

Person :: ~Person() { }
