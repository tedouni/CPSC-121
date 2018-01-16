//
//  main.cpp
//  WeekSevenExThree
//
//  Created by Tayseer Edouni on 3/3/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "STACK.h"

using namespace std;

int main(int argc, const char * argv[])
{

    STACK st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(1);
    st.push(5);
    st.push(9);
    st.push(2);
    
    cout<<st<<endl;

    cout<<"now popping off the stack entries one-by-one onto an undo Stack\n\n";
    
    STACK stUndo;
    while (!st.empty())
    {
        int x=st.top();
        stUndo.push(x);
        st.pop();
    }
    
    cout<<"Stack is now: "<<st<<endl;
    cout<<"Undo stack is now: "<<stUndo<<endl;
    cout<<"...done."<<endl;
    
    return 0;
}

