//
//  main.cpp
//  WeekEightAssignmentOne
//
//  Created by Tayseer Edouni on 3/8/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;


int main(int argc, const char * argv[])
{

    LinkedList<int > iList;
    iList.pushBack(1);
    iList.pushBack(2);
    iList.pushBack(3);
    iList.pushBack(4);
    cout<<"iList is:"<<iList<<endl;
    
    iList.pushFront(5);
    iList.pushFront(6);
    iList.pushFront(7);
    cout<<"and now iList is: "<<iList<<endl<<endl;
    
    LinkedList<double> dblList;
    dblList.pushBack(1.23);
    dblList.pushBack(3.45);
    dblList.pushBack(6.78);
    cout<<"dblList is: "<<dblList<<endl<<endl;
    
    
    LinkedList<string> strList;
    strList.pushBack("four");
    strList.pushBack("score");
    strList.pushBack("and");
    strList.pushBack("seven");
    strList.pushBack("years");
    strList.pushBack("ago");
    cout<<"strList is: "<<strList<<endl<<endl;
    
    strList.pushFront("our");
    strList.pushFront("fathers");
    strList.pushFront("brought");
    strList.pushFront("forth");
    strList.pushFront("on");
    strList.pushFront("this");
    strList.pushFront("continent");
    cout<<"and now strList is: "<<strList<<endl<<endl;
    
    cout<<"...done\n";



    return 0;
}

