//
//  Beverage.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Beverage.h"

Beverage::Beverage(string const& description) : _description(description)
{}

string Beverage::description() const
{
	return _description;
}

ostream& operator<<(ostream& os, Beverage const& bev)
{
	return os << bev._description << " $" << bev.cost() << "\n";
}