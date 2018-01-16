//
//  Student.cpp
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/24/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Student.h"

Student::Student( const string& schoolName, const string& major)
:Student(Person(), schoolName,major){}

Student::Student(const Person& P, const string& schoolName, const string& major)
:Person(P),_schoolName(schoolName),_major(major) {}

Student& Student::operator=(const Student& stOther)
{
    if (this != &stOther)
    {
        this->_major=stOther._major;
        this->_schoolName=stOther._schoolName;
    }
    return *this;
}

string Student:: schoolName() const
{
    return _schoolName;
}
void Student::schoolName( const string& schoolName)
{
    _schoolName=schoolName;
}

string Student:: major() const
{
    return _major;
}
void Student:: major(const string& major)
{
    _major=major;
}

bool    Student:: operator == (const Student& stOther) const
{
    return _schoolName == stOther._schoolName &&
    _major  == stOther._major;
    
}

bool    Student:: operator != (const Student& stOther) const
{
    return !(*this==stOther);

}

  ostream& operator<<( ostream& os, const Student& st)
{
    return os<<"Student[name = "<<st._schoolName<<",address="<<st._major<<"] , "<<dynamic_cast<const Person&>(st)<<"]";
    
}

Student::~Student(){}