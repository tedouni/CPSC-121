//
//  main.cpp
//  WeekThreeExThree Part Two
//
//  Created by Tayseer Edouni on 2/2/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>

using namespace std;

void printTriangle( int n, char c, char cFill, int width );

void printLine(int n, char c, char cFill, int width);

void printFillChars( int n , char cFill);

void printChars( int n, char c);





int main(void)
{
    
    printTriangle(1,'$','.',15);
    return 0;
}



void printTriangle( int n, char c, char cFill, int width )
{
    
    printLine(n, c, cFill, width);
    
    if (n<width)
        printTriangle( n+2,  c,  cFill, width );
    
    
    if (n!=width)
        
        printLine(n,c,cFill,width);         //going out
    
    
    
    
}

void printLine(int n, char c, char cFill, int width)
{
    
    int nFill=(width-n);
    
    printChars(n,c);
    printChars(nFill, cFill);
    
    cout<<endl;
    
    
}

void printFillChars( int n , char cFill)
{
    for (int i=0; i<n; i++)
    {
        cout<<cFill;
    }
}

void printChars( int n, char c)
{
    for (int i=0; i<n; i++)
    {
        cout<<c;
    }
}
