//
//  main.cpp
//  WeekSixProjectTwo
//
//  Created by Tayseer Edouni on 2/28/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main(int argc, const char * argv[])
{

    Car V(2013,"Dodge","Viper",150);
    Car F(2012,"Ferrari","458 Italia",160);
    cout<<V;
    cout<<F;
    
    V.accelerateBy(60);
    cout<<V;
    F.accelerateBy(55);
    cout<<F;
    
    cout<<"Polizia! Hit the brakes!\n";
    V.brakeBy(210);
    F.brakeBy(215);
    
    cout<<V;
    cout<<F;
    cout<<"Whew!  That was a close one!\n";
    cout<<"...done\n";
    return 0;
}

