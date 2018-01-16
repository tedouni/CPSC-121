//
//  main.cpp
//  WeekFiveExThree
//
//  Created by Tayseer Edouni on 2/21/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>

using namespace std;


void  swap( char a[], int index1, int index2 )
{
    char  temp   = a[ index1 ];
    a[ index1 ] = a[ index2];
    a[ index2 ] = temp;
}
void  selectionSort( char a[], int N )
{
    int  k = 0;
    printf( "%2d:  %s\n", k++, a );
    // sort into increasing order
    for (int i = 0; i < N; i++)  {
        int  min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap( a, i, min );
        printf( "%2d:  %s\n", k++, a );
    }
}
int main(void)
{

    char  s[] = { "SORTEXAMPLE" };
    selectionSort( s, sizeof( s ) - 1 );
    printf( "now sorted: %s\n", s );
    return 0;
}

