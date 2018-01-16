//
//  Fraction.cpp
//  Fraction
//
//  Created by Tayseer Edouni on 2/22/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

/*
 
 Your Fraction class should be able to add, subtract, multiply, and divide two Fractions together to create a new Fraction
 */

#include "Fraction.h"

Fraction:: Fraction(): Fraction(0,1) {} //set to 0/1 = 0
Fraction:: Fraction(int num): Fraction(_num= num ,_den = 1 ) {} //set to num/1
Fraction:: Fraction(int num, int den): _num(num) ,_den(den)
{
    normalize();
    
    /*if (_den == 0)
    {throw invalid_argument( "denominator == 0" );} */
    
} //set to num/den
    
    
int Fraction:: num() const      //accessor
{
    return _num;
}


void Fraction:: num(int num)     //mutator
{
    _num = num;
}

int Fraction:: den() const       //accessor
{
    return _den;
}

void Fraction:: den(int den)     //mutator
{
    _den = den;
    
    if (_den == 0)
    {throw invalid_argument( "denominator == 0" ); }
    
}


void Fraction::numden(int num, int den)
{
    _num=num;
    _den=den;
    normalize();
}

void Fraction::normalize( ) //used to reduce fraction
{
    int u= _num;    //make copy
    int v= _den;    //make copy
    int temp;
    
    while(v!= 0)
    {
        temp = u%v;     //remainder
        u = v;
        v = temp;
    }
    _num /= u;
    _den /= u;
}


Fraction operator +(const Fraction& f1, const Fraction& f2)
{
   
    /*int n = f1.num() * f2.den() + f1.den() * f2.num();
    int d = f1.den() * f2.den();
    Fraction fResult (n,d);
    fResult.normalize(); */
    
    
    return Fraction(f1._num * f2._den +f1._den*f2._num, f1._den*f2._den);
}

Fraction& Fraction:: operator +=( const Fraction& fOther )
{
    _num = _num * fOther._den + _den * fOther._num;
    _den =_den * fOther._den;
    normalize();
    
    return *this;
}

Fraction operator -(const Fraction& f1, const Fraction& f2)
{
   /* int n = f1.num() * f2.den()-f2.num() * f1.den();
    int d = f1.den() * f2.den();
    
    
    Fraction fResult (n,d);
    fResult.normalize();
    
    return fResult;*/

    return Fraction ( f1._num * f2._den -f2._num * f1._den,f1._den *f2._den);
}

Fraction& Fraction:: operator -= ( const Fraction& fOther )
{
   
    
    _num = _num * fOther._den - fOther._num * _den;
    _den = _den * fOther._den;
    
    normalize();
    
    return *this;
}


Fraction operator *(const Fraction& f1, const Fraction& f2)
{
    /*int n = f1.num() * f2.num();
    int d = f1.den() * f2.den();
    
    Fraction fResult (n,d);
    fResult.normalize();
    
    return fResult*/
    
    return Fraction(f1._num * f2._num, f1._den * f2._den);
    }

Fraction& Fraction:: operator *=( const Fraction& fOther )
{
    _num = _num * fOther._num;
    _den = _den * fOther._den;

     normalize();
    
    return *this;
}


Fraction operator /(const Fraction&f1, const Fraction& f2)
{
    /*int n = f1.num() * f2.den();
    int d = f1.den() * f2.num();
    
    Fraction fResult (n,d);
    fResult.normalize();
    
    return fResult;*/

    return Fraction ( f1._num * f2._den, f1._den *f2._num);
    
}


Fraction& Fraction:: operator /= ( const Fraction& fOther )
{
    if (fOther._num == 0)  {  throw  std::invalid_argument( "attempting divide by 0" );  }
  
    _num = _num * fOther._den;
    _den = _den * fOther._num;
    

    normalize();
    
    return *this;
}

ostream& operator<<( ostream& os, const Fraction& fr )
{
   return  os <<"("<<fr._num<<"/"<<fr._den<<")";
}


void operator++(Fraction& p)
{
	p._num++;
	p._den++;
}
void operator--(Fraction& p)
{
	p._num--;
	p._den--;
}

