//
//  Array2d.h
//  WeekFourExOne
//
//  Created by Tayseer Edouni on 2/15/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef WeekFourExOne_Array2d_h
#define WeekFourExOne_Array2d_h

void printArray2D ( int* pxy, int nRows, int nCols )
{
    int total= nCols * nRows;
    
    cout<<"...beginning array2d()\n\n";

    for (int i=0; i< total ; ++i)
    {
        cout<<setw(4)<< *(pxy +i);
        
        
        if (i % nCols == nCols -1 )
        {
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"...ending array2d()...\n\n";
}

#endif
