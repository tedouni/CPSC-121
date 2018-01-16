//
//  Milk.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Milk.h"
Milk::Milk(const Beverage& beverage) :CondimentDecorator("Milk,"+beverage.description(), beverage){}

string Milk::description() const
{
	return "Milk," + beverage().description();
    
}

double Milk::cost() const
{
	return .10 + beverage().cost();
}