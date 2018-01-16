//
//  Car.cpp
//  WeekSixProjectTwo
//
//  Created by Tayseer Edouni on 2/28/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Car.h"

Car::Car(): Car(0,"no make","no model",0) {}

Car::Car(int year, string make, string model, double speed)
:_year(year), _make(make), _model(model), _speed(speed),_accel(0) {}

int Car::year() const
{
    return _year;
}

void Car:: year(int year)
{
    _year=year;
}


double Car::speed() const
{
    return _speed;
}
void Car::speed(double speed)
{
    _speed=speed;
}


string Car::make() const
{
    return _make;
}

void Car::make(string make)
{
    _make=make;
}

string Car::model() const
{
    return _model;
}
void Car::model(string model)
{
    _model=model;
}

void Car::accelerateBy(double deltaV )
{
    _speed= _speed + deltaV;
}

void Car::brakeBy(double deltaV)
{
    _speed=_speed-deltaV;
}

ostream& operator<<(ostream& os, const Car& c)
{
    return os<< "Car[year="<<c._year<<",make="<<c._make<<",model="<<c._model<<",speed="<<c._speed<<"]\n";
}