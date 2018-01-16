//
//  vector1d.h
//  WeekFiveExTwo
//
//  Created by Tayseer Edouni on 2/21/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef WeekFiveExTwo_vector1d_h
#define WeekFiveExTwo_vector1d_h
#include <vector>
#include <iostream>

using namespace std;
void displayVector1D ( vector < int> v )
{
    for (vector<int>::iterator  it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


#endif
