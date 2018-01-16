//
//  Espresso.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Espresso.h"

Espresso::Espresso( ) :Beverage("Espresso")

{}

double Espresso::cost() const
{
	return 1.99;
}