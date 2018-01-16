#ifndef __Week_11__Whip__
#define __Week_11__Whip__

#include <iostream>
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
    
public:
	Whip(const Beverage& beverage);
	string description() const;
	double cost() const;
};

#endif
