//
//  Person.cpp
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Person.h"
Person:: Person(): Person ("no name", "no address" ) {}
Person:: Person( const string& name, const string& address): _name(name), _address(address) {}

Person:: Person( const Person& pOther): _name(pOther._name), _address(pOther._address) {}

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

bool Person:: operator == (const Person& pOther) const
{
    return _name == pOther._name &&
    _address     == pOther._address;
}

bool Person:: operator != (const Person& pOther) const
{
    return !(*this==pOther);
}

ostream& operator<<(ostream& os, const Person& p)
{
    return os << "Person[name = "<<p._name<<",address ="<<p._address<<"]";
    
}