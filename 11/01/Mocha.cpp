//
//  Mocha.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Mocha.h"

Mocha::Mocha(const Beverage& beverage) :CondimentDecorator("Mocha, "+beverage.description(), beverage){}

string Mocha::description() const
{
	return "Mocha," + beverage().description();
    
}

double Mocha::cost() const
{
	return .20 + beverage().cost();
}
