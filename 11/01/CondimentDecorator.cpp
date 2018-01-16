//
//  CondimentDecorator.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "CondimentDecorator.h"


CondimentDecorator::CondimentDecorator(string const& description,const Beverage& bev) : Beverage(description),_beverage(bev)
{}

Beverage const&  CondimentDecorator::beverage() const {return _beverage;}