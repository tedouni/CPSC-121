//
//  Rectangle.h
//  WeekTwoExFive
//
//  Created by Tayseer Edouni on 1/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekTwoExFive__Rectangle__
#define __WeekTwoExFive__Rectangle__

#include <iostream>
using namespace std;

#include "Shape.h"

class Rectangle : public Shape
{
    
public:
    Rectangle();
    Rectangle (double length, double width);
    
    void width (double width);
    void length (double length);
    
    virtual double area() const;
    virtual double perimeter() const;
    virtual double width() const;
    virtual string name() const;
    
private:
    double _width, _length;
    
};

#endif /* defined(__WeekTwoExFive__Rectangle__) */
