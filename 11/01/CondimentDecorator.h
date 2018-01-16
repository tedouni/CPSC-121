//
//  CondimentDecorator.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__CondimentDecorator__
#define __Week_11__CondimentDecorator__

#include <iostream>
#include "Beverage.h"
#include <string>

using namespace std;

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator(string const& description, const Beverage& bev);
    Beverage const& beverage() const;
    
    virtual double cost()        const = 0;
	virtual string description() const = 0;
    
private:
    const Beverage& _beverage;
};
#endif /* defined(__Week_11__CondimentDecorator__) */
