//
//  Square.h
//  WeekTwoExFive
//
//  Created by Tayseer Edouni on 1/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekTwoExFive__Square__
#define __WeekTwoExFive__Square__

#include <iostream>
#include <string>
using namespace std;
#include "Rectangle.h"

class Square : public Rectangle
{
    Square();
    Square(double side);
    
    double side() const;
    void side(double side);
    
    string name() const;
    
private:
    double _side;
};

#endif /* defined(__WeekTwoExFive__Square__) */
