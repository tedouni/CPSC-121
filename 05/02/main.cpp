//
//  main.cpp
//  WeekFiveExTwo
//
//  Created by Tayseer Edouni on 2/21/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "vector1d.h"
#include <vector>
#include <iomanip>
#include "vector2d.h"


using namespace std;

int main(int argc, const char * argv[])
{

    vector<int>  u;
    for (int i = 0; i < 10; i++)
    {
        u.push_back( i*i*i );
    }
    cout << "displaying u..." << endl;
    displayVector1D( u );
    
    cout<<endl;
    cout<<endl;
    

    vector2d();
    return 0;
}

