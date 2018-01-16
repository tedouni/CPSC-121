//
//  Fraction.h
//  Fraction
//
//  Created by Tayseer Edouni on 2/22/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __Fraction__Fraction__
#define __Fraction__Fraction__

#include <iostream>

using namespace std;

class Fraction
{
private:
    int _num;   //numerator
    int _den;   //denomenator
    
public:
    Fraction();         //set to 0/1=0
    Fraction(int num);  //set den to 1
    Fraction(int num, int den); //set to num/den
    
    
    int num() const;
    void num(int num);
    
    int den() const;
    void den(int den);
    
    //int numden() const;
    void numden(int num, int den);
    
    friend ostream& operator<<( ostream& os, const Fraction& fr );
    
    void normalize( );
  
                    //friend arithmetic functions
    
    friend Fraction operator +(const Fraction& f1, const Fraction& f2);
    friend Fraction operator -(const Fraction& f1, const Fraction& f2);
    friend Fraction operator *(const Fraction& f1, const Fraction& f2);
    friend Fraction operator /(const Fraction&f1, const Fraction& f2);
    
                    //member arithmetic functions to change original fraction
    
    Fraction& operator +=( const Fraction& fOther );
    Fraction& operator -=( const Fraction& fOther );
    Fraction& operator *=( const Fraction& fOther );
    Fraction& operator /=( const Fraction& fOther );
	friend void operator++(Fraction& p);
	friend void operator--(Fraction& p);
};
#endif /* defined(__Fraction__Fraction__) */
