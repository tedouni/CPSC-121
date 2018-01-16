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


int main(int argc, const char * argv[])
{

    Person   p( "John Smith", "321 Wilson St." );
    Person   q( "John Smith", "123 Wilson St." );
    Student  st1( p, "CSUF", "CS" );
    Student  st2( p, "CSUF", "EE" );
    cout << "p is: " << p << endl;
    cout << "q is: " << q << endl;
    cout << "p == q ? " << (p == q) << endl;
    cout << "st1 is: " << st1 << endl;
    cout << "st2 is: " << st2 << endl;
    cout << "st1 == st2: " << (st1 == st2) << endl;
    
    return 0;
}

