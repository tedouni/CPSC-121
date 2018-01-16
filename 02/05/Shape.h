

#ifndef __WeekTwoExFive__Shape__
#define __WeekTwoExFive__Shape__

#include <iostream>
#include <string>
using namespace std;

class Shape
{
    
public:
    virtual double area() const = 0; //Virtual (will call appropiate subclass at runtime)
    virtual double perimeter() const=0;
    virtual double length() const =0;
    virtual string name() const =0;
    
    
};

#endif /* defined(__WeekTwoExFive__Shape__) */
