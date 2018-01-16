//
//  vector2d.h
//  WeekFiveExTwo
//
//  Created by Tayseer Edouni on 2/21/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef WeekFiveExTwo_vector2d_h
#define WeekFiveExTwo_vector2d_h
#include <vector>
#include <iostream>
using namespace std;

void  displayVector2DRowsCols( vector<vector<int>>  vs, size_t r, size_t c )
{
    cout << right;
    cout << " vector<vector<int>> version..." << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << setw( 3 ) << vs[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void  displayVector2D( vector<vector<int>>  vs )
{
        displayVector2DRowsCols( vs, vs.size(), vs[0].size() );
}

int  vector2d()
{
    cout << " ...beginning vector2d" << endl; vector<vector<int>> vs; // a vector of vector<int>'s
    for (int i = 0; i < 5; i++)
    {
        vector<int>  v;
        for (int j = 0; j < 8; j++)
        {
            v.push_back( 3 * (i + 1) + j * j );   // add an int to our vector<int>
        }
        vs.push_back( v );    // add a vector<int> to our vector<vector<int>>
    }
    
    
    displayVector2D( vs );
    cout << "   ...ending vector2d" << endl;
    
    return 0;
}

#endif
