//
//  main.cpp
//  WeekTen
//
//  Created by Tayseer Edouni on 3/28/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include "Ellipse.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "DblLinkedList.h"

using namespace std;

int main(int argc, const char * argv[])
{

    cout<<"........running testLinkedListDbl..."<<endl<<endl;
    DblLinkedList<int> primes;
    primes.pushBack(2);
    primes.pushBack(3);
    primes.pushBack(5);
    primes.pushBack(7);
    primes.pushBack(11);
    primes.pushBack(13);
    primes.pushBack(17);
    primes.pushBack(19);

    DblLinkedList<string> caesarQuotes;
    caesarQuotes.pushBack("men");
    caesarQuotes.pushBack("in");
    caesarQuotes.pushBack("general");
    caesarQuotes.pushBack("are");
    caesarQuotes.pushBack("quick");
    caesarQuotes.pushBack("to");
    caesarQuotes.pushBack("believe");
    caesarQuotes.pushBack("that");
    caesarQuotes.pushBack("which");
    caesarQuotes.pushBack("they");
    caesarQuotes.pushBack("wish");
    caesarQuotes.pushBack("to");
    caesarQuotes.pushBack("be");
    caesarQuotes.pushBack("true");
    
    DblLinkedList<Shape const&> shapes;
    shapes.pushBack(Circle(Coord(0,0),3));
    shapes.pushBack(Rectangle(Coord(-1,2),3,5));
    shapes.pushBack(Triangle(3,4,5));
    shapes.pushBack(Ellipse(Coord(0,0),10,20));
    shapes.pushBack(Parallelogram(Coord(-4,-2),10,20,30));
    
    cout<<"prime numbers: "<<primes<<endl<<endl;
    cout<<"julius casar quotes: "<<caesarQuotes<<endl<<endl;
    cout<<"shapes: "<<shapes<<endl<<endl;
    
    while (!shapes.empty())
    {
        Shape const& dshape= shapes.popFront();
        
        cout<<dshape.name()<<" has area: "
        <<dshape.area()<<" and perimeter: "<<dshape.perimeter()<<endl;
        
    }
    cout<<endl<<".......done."<<endl;
    


    
    return 0;
}

