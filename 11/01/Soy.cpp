//
//  Soy.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 4/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Soy.h"

Soy::Soy(const Beverage& beverage) :CondimentDecorator("Soy, "+beverage.description(), beverage){}

string Soy::description() const
{
	return "Soy," + beverage().description();
    
}

double Soy::cost() const
{
	return .15 + beverage().cost();
}