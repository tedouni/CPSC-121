//
//  Array1d.h
//  WeekFourExOne
//
//  Created by Tayseer Edouni on 2/15/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//
using namespace std;
#include <iostream>
#include <iomanip>

#ifndef WeekFourExOne_Array1d_h
#define WeekFourExOne_Array1d_h


void printArray1d ( int* px, int nCols )
{
    cout<<"...beginning array1d()\n\n";
    
    
    for (int i=0; i< nCols ; ++i)
    {
        cout<<setw(4)<< *(px +i);
        
    }
    cout<<endl;
    cout<<endl;
    cout<<"...ending array1d()...\n\n";
    cout<<endl;

}


#endif
