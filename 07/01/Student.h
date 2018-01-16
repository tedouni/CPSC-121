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
    Student(const string& schoolName="no school", const string& major="no major");
    Student(const Person& P, const string& schoolName,const  string& major);
   
    Student(const Student& stOther);
    Student& operator=(const Student& sOther); //assignment
    ~Student(); //deconstructor 
    
    
    string schoolName() const;
    void   schoolName( const string& schoolName);
    
    string major() const;
    void   major(const string& major);
    
    bool    operator == (const Student& stOther) const;
    bool    operator != (const Student& stOther) const;
    friend  ostream& operator<<( ostream& os, const Student& st);
    
    
};

#endif /* defined(__WeekSixExOne__Student__) */
