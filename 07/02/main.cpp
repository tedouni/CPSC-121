//
//  main.cpp
//  Fraction
//
//  Created by Tayseer Edouni on 2/22/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Fraction.h"

using namespace std;

void init( char c, Fraction x[], int n)
{
    for (int i=0; i<n ;++i)
    { x[i].numden (i,n);
    cout<<c<<"=["<<std::setw(2)<<i<<"]"<<x[i]<<" ";
    if (i % 5 == 4) cout<<endl;
    }
    cout<<endl;
}

int main(void)
{
    cout<<right;
    
    Fraction x[20], y[10];
    
    init( 'x', x, sizeof(x) /sizeof(x[0]));
    init('y', y, sizeof(y)/sizeof(y[0]));
    
    for (int i=1; i<3; ++i)
    {
        cout<< x[i]<<"+"<<y[i]<<"="<<(x[i]+y[i])<<endl;
        cout<< x[i]<<"-"<<y[i]<<"="<<(x[i]-y[i])<<endl;
        cout<< x[i]<<"*"<<y[i]<<"="<<(x[i]*y[i])<<endl;
        cout<< x[i]<<"/"<<y[i]<<"="<<(x[i]/y[i])<<endl;
    }
    
    Fraction f = x[9];
    Fraction g = y[9];
    
    cout<<f<<"+="<<g<<"="<<(f+=g)<<endl;
    cout<<f<<"-="<<g<<"="<<(f-=g)<<endl;
    cout<<f<<"*="<<g<<"="<<(f*=g)<<endl;
    cout<<f<<"/="<<g<<"="<<(f/=g)<<endl;
    
    cout<<endl;
    cout<<"...done."<<endl;
    
    
    return 0;
}