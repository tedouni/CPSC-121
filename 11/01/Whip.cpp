
#include "Whip.h"

Whip::Whip(const Beverage& beverage) :CondimentDecorator("Whip, "+beverage.description(), beverage){}

string Whip::description() const
{
	return "Whip," + beverage().description();
    
}

double Whip::cost() const
{
	return .10 + beverage().cost();
}