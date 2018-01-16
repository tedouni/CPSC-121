//
//  Mocha.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__Mocha__
#define __Week_11__Mocha__

#include <iostream>
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
    
public:
	Mocha(const Beverage& beverage);
	string description() const;
	double cost() const;
};

#endif /* defined(__Week_11__Mocha__) */
