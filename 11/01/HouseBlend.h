//
//  HouseBlend.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__HouseBlend__
#define __Week_11__HouseBlend__

#include <iostream>
#include "Beverage.h"
using namespace std;

class HouseBlend : public Beverage
{
public:
	HouseBlend();//string description);
	double cost() const;

};
#endif /* defined(__Week_11__HouseBlend__) */
