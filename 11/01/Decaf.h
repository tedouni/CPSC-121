//
//  Decaf.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__Decaf__
#define __Week_11__Decaf__

#include <iostream>
#include "Beverage.h"

class Decaf: public Beverage
{
public:
	Decaf();//string description);
	double cost() const;
};

#endif /* defined(__Week_11__Decaf__) */
