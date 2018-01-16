//
//  Array3d.h
//  WeekFourExOne
//
//  Created by Tayseer Edouni on 2/15/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
using namespace std;

#ifndef WeekFourExOne_Array3d_h
#define WeekFourExOne_Array3d_h




void printArray3D( int* pxyz, int nFloors, int nRows, int nCols )
{
    cout<<"...beginning array3d()...\n\n";
    
    int total= nCols * nRows*nFloors;
    int indent=nCols*nRows;
    
    
    for (int i=0; i< total ; ++i)
    {
        cout<<setw(4)<< *(pxyz +i);
        
        
        if (i % nCols == nCols -1)
            cout<<endl;
            
        
        
        if (i % indent == indent-1)
            cout<<endl;
      
    }
    
    cout<<endl;
    cout<<"...ending array 3d()...\n\n";
    
}


#endif
