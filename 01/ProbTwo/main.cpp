//
//  main.cpp
//  WeekOneExTwo
//
//  Created by Tayseer Edouni on 1/18/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void)
{

    //part one
    
    for (int i=1; i<=15; i++)
    {
        if (i<10)
        {
            cout<<" "<<i<<". I will not talk in class\n";
        }
        else
        cout<<i<<". I will not talk in class\n";
    }
    
    cout<<endl;
    cout<<endl;
    
    
    //part two
    
    for (int i=10; i>0; i--)
    {
        if (i>9)
        {
            cout<<i<<". C++ rocks!"<<endl;
        }
        else
            cout<<" "<<i<<". C++ rocks!"<<endl;
        
    }
    return 0;
}

