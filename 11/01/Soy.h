//
//  Soy.h
//  Week 11
//
//  Created by Tayseer Edouni on 4/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__Soy__
#define __Week_11__Soy__

#include <iostream>
#include "CondimentDecorator.h"


class Soy : public CondimentDecorator
{
    
public:
	Soy( Beverage const& beverage);
	string description() const;
	double cost() const;
};
#endif /* defined(__Week_11__Soy__) */
