//
//  Student.h
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/24/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekSixExOne__Student__
#define __WeekSixExOne__Student__

#include <iostream>
#include "Person.h"

class Student: public Person
{
    
private:
    string _schoolName;
    string _major;
    
public:
    Student() ;
    Student(const Person& P,  string schoolName,  string major);
    Student(string name, string address, string schoolName, string major);
    
    string schoolName() const;
    void   schoolName( const string& schoolName);
    
    string major() const;
    void   major(const string& major);
    
    bool    operator == (const Student& stOther) const;
    bool    operator != (const Student& stOther) const;
    friend  ostream& operator<<( ostream& os, const Student& st);
    
    
};

#endif /* defined(__WeekSixExOne__Student__) */
