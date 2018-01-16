//
//  main.cpp
//  WeekThreeExThree
//
//  Created by Tayseer Edouni on 2/2/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>

using namespace std;

void printDiamond( int n, char c, char cFill, int width );

void printLine(int n, char c, char cFill, int width);

void printFillChars( int n , char cFill);

void printChars( int n, char c);

void printTriangle(int n, char c, char cFill, int width);




int main(void)
{
    
    printDiamond(1,'$','.',35);
    return 0;
}



void printDiamond( int n, char c, char cFill, int width )
{
    
    printLine(n, c, cFill, width);          //going in
    
    if (n<width)
        printDiamond( n+2,  c,  cFill, width );

    
    if (n!=width)
        
        printLine(n,c,cFill,width);         //going out
    
    
    

}

void printLine(int n, char c, char cFill, int width)
{
    
    int nFill=(width-n)/2;
    
    printFillChars(nFill, cFill);
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

void printTriangle(int n, char c, char cFill, int width)
{
    printLine(n, c, cFill,  width);
    
    if (n<width)
        printTriangle(n+2 ,c, cFill, width);
    if(n!=width)
        
        printLine(n,c,cFill,width);
        
    
}
