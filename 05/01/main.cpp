//
//  main.cpp
//  WeekFourExOne
//
//  Created by Tayseer Edouni on 2/15/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "Array1d.h"
#include "Array2d.h"
#include "Array3d.h"
#include <iomanip>

using namespace std;





int main(void)
{

    int x[6];
    
    for (int i=0; i<6; ++i)  //initialization for 1D Array
    {
        x[i] = (i+3) * (i+4);
    }
    printArray1d(x, sizeof( x ) / sizeof( x[0]));
    
    
    
    int xy[3][6];
    
    for (int i=0; i <3 ; i++)       //initialization for 2D Array
    {
        for (int j=0; j<6; j++)
        {
            xy[i][j]=( i+1 ) * j;
        }
    }
    
    printArray2D( reinterpret_cast < int* >  (xy) , 3, 6);
    
    int  zyx[3][4][6];
    
    for (int i = 0; i < 3; i++) //initialization for 3D Array 
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                zyx[i][j][k] = (i+3)*(i+4) * 2*j + k*k;
            }
        }
    }
    
    printArray3D( reinterpret_cast<int*>( zyx ), 3, 4, 6 );
    
    return 0;
}

