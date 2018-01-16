//
//  Student.cpp
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/24/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Student.h"

Student:: Student() : Student(Person () , "no schoolName", "no major") {}
                             
Student:: Student( const Person& P,  string schoolName,  string major)
:Person(P), _schoolName(schoolName), _major(major) {}

Student::Student(string name, string address, string schoolName, string major)
:Student (Person(name,address),schoolName,major) {}


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