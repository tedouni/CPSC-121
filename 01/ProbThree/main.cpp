//
//  main.cpp
//  WeekOneExThree
//
//  Created by Tayseer Edouni on 1/18/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    string name;
    string city;
    
    cout<<"Please enter your name: ";
    getline(cin,name);
    
    cout<<"Enter the city you live in: ";
    getline(cin,city);
    
    cout<<endl;
    
    cout<<"Hello, "<<name<<endl;
    cout<<"You live in "<<city<<endl;
    
    
    return 0;
}

