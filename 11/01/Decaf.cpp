//
//  Decaf.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Decaf.h"

Decaf::Decaf( ) : Beverage("Decaf")
{

}
double Decaf::cost() const
{
	return 1.05;
}