//
//  Circle.h
//  WeekOne_EX_6
//
//  Created by Tayseer Edouni on 1/18/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekOne_EX_6__Circle__
#define __WeekOne_EX_6__Circle__

#include <iostream>

using namespace std;

const double PI=3.14159265359;

class Circle
{
public:
    Circle(); //constructor
    Circle( double radius);
    
    void radius( double value); //set radius
    double radius() const; //accessor
    
    double area() const; //calculates are
    double perimeter() const; //calculates perimeter
    
private:
    double _radius;
};

#endif /* defined(__WeekOne_EX_6__Circle__) */
