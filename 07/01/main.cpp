//
//  main.cpp
//  WeekSixExOne
//
//  Created by Tayseer Edouni on 2/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

string trueOrFalse(bool condition){return (condition?"true":"false");}

int main(int argc, const char * argv[])
{
    Person p("John Smith","321 Wilson St.", "123-45-6789");
    Person q("John Smith","123 Wilson St.", "123-45-6789");
    Person r("Joe Waters","111 Main St.", "111-22-3333");
    
    cout<<"p is:"<<p<<endl;
    
    Person aq;
    aq=q;
    cout<<endl<<"assignment operator aq=q";
    cout<<endl<<"q is: "<<q;
    cout<<endl<<"aq is: "<<aq<<endl;
    
    cout<<endl<<"copy constructor cr=r";
    cout<<endl<<"r is: "<<r;
    Person cr=r;
    cout<<endl<<"cr is: "<<cr<<endl;
    
    cout<<endl<<"p == q ? "<<trueOrFalse(p==q)<<endl<<endl;

    Student st1(p,"CSUF", "CS");
    Student st2(p, "CSUF", "EE");
    
    cout<<"st1 is: "<<st1<<endl;
    cout<<"st2 is: "<<st2<<endl;
    cout<<"st1==st2: "<<trueOrFalse(st1==st2)<<endl<<endl;
    cout<<"...done."<<endl;
    
    
    return 0;
}

