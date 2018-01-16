//
//  main.cpp
//  WeekFourExTwoPartOne
//
//  Created by Tayseer Edouni on 2/8/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main( void ) {

    const int SIZE = 20;

    int     numOffices, count;
    
    double  sales[SIZE],
            totalSales=0.0,
            averageSales;

    ifstream dataIN;

    dataIN.open("/Users/troy/Desktop/Xcode/sales.txt");
    
    if (!dataIN) { cout << "Error opening the data file. \n"; }
    else    {
        count = 0;
        
        while( count < SIZE && dataIN >>sales[count] )
        {
            totalSales+= sales[count++];
        }
        
        numOffices=count;
        
        dataIN.close();
        
        averageSales= totalSales / numOffices;
        
        cout << fixed << showpoint << setprecision( 2 );
        cout << "The total sales are   $"
            << setw( 9 ) << totalSales << endl;
        cout << "the average sales are $"
                        << setw( 9 ) << averageSales << endl;
        
        cout << "\nThe following offices have below-average sales figures.\n";
        
        for ( int office = 0; office < numOffices;  office++ )
        {
            if (sales[office] < averageSales)
            {
                cout << "Office " << setw( 2 ) << (office + 1)<<"    $"<<sales[office] <<endl;
            
            
            }
        }
    }
    
    cout<<"...done."<<endl;
    
    
        return 0;
}

