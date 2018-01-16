//
//  Milk.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__Milk__
#define __Week_11__Milk__


#include <iostream>
#include "CondimentDecorator.h"

class Milk : public CondimentDecorator
{

public:
	Milk(const Beverage& beverage);
	string description() const;
	double cost() const;
};


#endif /* defined(__Week_11__Milk__) */
