//
//  Espresso.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__Espresso__
#define __Week_11__Espresso__

#include <iostream>
#include "Beverage.h"

class Espresso :public Beverage
{
public:
	Espresso();
	double cost() const;
};
#endif /* defined(__Week_11__Espresso__) */
