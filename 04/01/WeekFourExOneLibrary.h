//
//  WeekFourExOneLibrary.h
//  WeekFourExOne
//
//  Created by Tayseer Edouni on 2/8/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//
#include <iostream>
using namespace std;

#ifndef WeekFourExOne_WeekFourExOneLibrary_h
#define WeekFourExOne_WeekFourExOneLibrary_h



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


void printDiamondLine(int n, char c, char cFill, int width)
{
    
    int nFill=(width-n)/2;
    
    printFillChars(nFill, cFill);
    printChars(n,c);
    printChars(nFill, cFill);
    
    cout<<endl;
    

}


void printTriangleLine(int n, char c, char cFill, int width)
{
    int nFill=(width-n);
    
    printChars(n,c);
    printChars(nFill, cFill);
    
    cout<<endl;
    

}

void printReverseTriangleLine(int n, char c, char cFill, int width)
{
    int nFill=(width-n);
    
    printFillChars(nFill, cFill);
    printChars(n,c);
    
    cout<<endl;
    

}



void printDiamond( int n, char c, char cFill, int width )
{
    printDiamondLine(n, c, cFill, width);          //going in
    
    if (n<width)
        printDiamond( n+2,  c,  cFill, width );
    
    
    if (n!=width)
        
        printDiamondLine(n,c,cFill,width);         //going out
    

}


void printTriangle( int n, char c, char cFill, int width )
{
    
    printTriangleLine(n, c, cFill, width);
    
    if (n<width)
        printTriangle( n+2,  c,  cFill, width );
    
    
    if (n!=width)
        
        printTriangleLine(n,c,cFill,width);         //going out

}



void printReverseTriangle( int n, char c, char cFill, int width )
{
    
    printReverseTriangleLine(n, c, cFill, width);
    
    if (n<width)
        printReverseTriangle( n+2,  c,  cFill, width );
    
    
    if (n!=width)
        
        printReverseTriangleLine(n,c,cFill,width);         //going out
    

}

#endif
