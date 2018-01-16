//
//  Person.h
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekSixExOne__Person__
#define __WeekSixExOne__Person__

#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string _name;
    string _address;
    string _ssn;
    
public:
    Person(const string& name="no name", const string& address="no address",
           const string& ssn="no ssn");
    //Person( const string& name, const string& address,const string& ssn);
    Person( const Person& pOther);  //copy constructor
    Person& operator=(const Person& pOther); //assignment operator
    ~Person(); //deconstructor 
    
    string name() const; //accessor
    void name( const string& name); //mutator
    
    string address() const; //accessor
    void address(const string& address);// mutator
    
    string ssn() const;
    void ssn(const string& ssn);
    
    bool operator == (const Person& pOther) const; //operator== - new
    bool operator != (const Person& pOther) const;
    
    friend ostream& operator<<(ostream& os, const Person& p);
    

};

#endif /* defined(__WeekSixExOne__Person__) */
