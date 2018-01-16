//
//  Car.h
//  WeekSixProjectTwo
//
//  Created by Tayseer Edouni on 2/28/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekSixProjectTwo__Car__
#define __WeekSixProjectTwo__Car__

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    int    _year;
    string _make;
    string _model;
    double _speed;
    double _accel;
    
public:
    Car();
    Car(int year, string make, string model, double speed);
    int year() const;
    void year(int year);
    double speed() const;
    void speed(double speed);
    string make() const;
    void make(string make);
    string model() const;
    void model(string model);
    void accelerateBy(double deltaV );
    void brakeBy(double deltaV);
    
    friend ostream& operator<<(ostream& os,const Car& c);
    
    
};
#endif /* defined(__WeekSixProjectTwo__Car__) */
