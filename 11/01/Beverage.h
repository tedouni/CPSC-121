//
//  Beverage.h
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Week_11__Beverage__
#define __Week_11__Beverage__

#include <string>
#include <iostream>

using namespace std;

class Beverage
{
private:
	string _description; // name of all beverages

public:
	Beverage(string const & description);
	virtual string description() const ;
	virtual double cost() const = 0;

	friend ostream& operator<<(ostream& os, Beverage const& bev);



};
#endif