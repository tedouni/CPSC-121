//
//  main.cpp
//  WeekOne_EX_6
//
//  Created by Tayseer Edouni on 1/18/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void)
{
    
    
    Circle c, d( 314.2);
    
    cout<<"the radius of c is: "<<c.radius()<<endl;
    
    cout<<"change the radius to 2.5"<<endl;
    c.radius(2.5);
    cout<<"the radius of c is: "<<c.radius()<<endl;
    cout<<"the area of c is: "<<c.area()<<endl;
    cout<<"the perimeter of c is: "<<c.perimeter<<endl;
    
    cout<<"the radius of d is: "<<d.radius()<<endl;
    cout<<"the area of d is: "<<d.area()<<endl;
    cout<<"the perimeter of d is: "<<d.perimeter()<<endl;
    
    cout<<"...done."<<endl;

   
    return 0;
}

