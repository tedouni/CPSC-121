//
//  STACK.h
//  WeekSevenExThree
//
//  Created by Tayseer Edouni on 3/3/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekSevenExThree__STACK__
#define __WeekSevenExThree__STACK__

#include <iostream>
#include <stdexcept>
#include <algorithm>
using namespace std;
class STACK
{
private:
    int _top;
    int _max;
    int* _data;
    
private:
    void copy(const STACK& other);
    
public:
    STACK(int max= 100);
    STACK( const STACK& other); //copy constructor
    STACK& operator=(const STACK& other);  //assignment operator
    ~STACK(); //deconstructor
    
    int size() const;
    int max() const;
    
    int top() const; //retrieves the top of stack
    void pop();
    void push(int val);
    bool empty() const;
    
    bool operator==(const STACK& other) const;
    bool operator!=(const STACK& other) const;
    friend ostream& operator<<(ostream& os, const STACK& st);
    
    
    
};
#endif /* defined(__WeekSevenExThree__STACK__) */
