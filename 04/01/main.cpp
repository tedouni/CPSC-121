//
//  main.cpp
//  WeekFourExOne
//
//  Created by Tayseer Edouni on 2/8/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "WeekFourExOneLibrary.h"

void PrintPattern( int n, char c, char cFill, int width, void (*fp)(int n, char c, char cFill, int width ) );

int main( void ){
    PrintPattern( 1, '!', '@', 11, printDiamondLine      );
    cout<<endl;
    cout<<endl;
    PrintPattern( 1, 'a', 'Z', 11, printTriangleLine     );
    cout<<endl;
    cout<<endl;
    PrintPattern( 1, '+', 'R', 11 , printReverseTriangleLine );
    cout<<endl;
    cout<<endl;
    
    cout << "...done." << endl;
    return 0;
}

void PrintPattern( int n, char c, char cFill, int width, void (*fp)(int n, char c, char cFill, int width ) ) {
    
    ( *fp ) ( n, c, cFill, width );
    
    if ( n < width ) {
        PrintPattern(n+2, c, cFill, width, fp); // recursive fn call
    }
    
    if ( n != width)  {
        ( *fp )( n , c , cFill, width);
        
    }
}
