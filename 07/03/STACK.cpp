//
//  STACK.cpp
//  WeekSevenExThree
//
//  Created by Tayseer Edouni on 3/3/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "STACK.h"

STACK::STACK (int max): _top(0), _max(max), _data(new int[_max])
{}

STACK::STACK(const STACK& other):_data(nullptr)
{
    copy(other);
}

STACK& STACK::operator=(const STACK& other)
{
    if(this!=&other)        //checks to see if they are already equal
    copy (other);
    
    return *this;
}

void STACK::copy(const STACK& other)
{
    _top= other._top;
    _max= other._max;
    
    if (_data!=nullptr)
        delete[] _data;
    _data= new int [other._max];
    memcpy(_data, other._data, _top*sizeof(int));
}

STACK:: ~STACK()
{
    if(_data != nullptr)
        delete[] _data;
}

int STACK::top() const
{
    if(empty())
        throw std::underflow_error("in STACK::top()");
    
    return _data[_top-1];
}

int STACK::max() const
{
    return _max;
}

void STACK::pop()
{
    if (empty())
        throw std::underflow_error("in STACK::pop()");
    int temp= _data[_top--];
    
    
}

void STACK::push(int val)
{
    if(_top>_max-2)
        throw std::overflow_error( "in STACK::push(int)");
    
    _data[_top++]=val;
}


bool STACK::empty() const
{
    return _top==0;
}

bool STACK::operator==(const STACK& other) const
{
    return _top == other._top &&
           _max == other._max &&
           ((_data==nullptr && other._data==nullptr) ||
            memcmp(_data,other._data,_top));
}

bool STACK::operator!=(const STACK& other) const
{
    return !(*this == other);
}

ostream& operator<<(ostream& os, const STACK& st)
{
    os<<"STACK[";
    if (st.empty())
    os<<"empty";
    
    else
    {
        STACK temp =st;
        while (!temp.empty())
        {
            os<<temp.top();
            temp.pop();
            if (!temp.empty())
            os<<" ";
        }
    }
    
    return os<<"]";
}

