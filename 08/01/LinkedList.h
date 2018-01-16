//
//  LinkedList.h
//  WeekEightAssignmentOne
//
//  Created by Tayseer Edouni on 3/8/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekEightAssignmentOne__LinkedList__
#define __WeekEightAssignmentOne__LinkedList__

#include <iostream>

using namespace std;

template <typename T> class LinkedListT;
template <typename T> std::ostream& operator<<( std::ostream&, LinkedListT<T> const& );

template<class T>
class LinkedList
{
    
public:
    LinkedList();
    LinkedList(LinkedList<T> const& other);
    LinkedList<T>& operator=(LinkedList<T> const& other);
    ~LinkedList();
    
    struct Node
    {
        Node (T val): _val(val), _next(nullptr) {}
        T _val;
        Node* _next;
    };
    
    void pushFront (T val);
    void pushBack (T val);
    
    T popFront();
    T popBack();
    
   // void insert( T val, Node* before);
    void deleteNode(Node* node);
    bool empty() const;
    const Node* front() const;
    const Node* back() const;
    
    friend  ostream&  operator<< <T>( ostream& os, LinkedListT<T> const& list );
    
    void Display();
    
    
private:
    void copy(LinkedList const& other);
    void deleteRest(Node* from);
    Node* back();
    
private:
    size_t _size;
    Node* _head;
    
    
};





#endif /* defined(__WeekEightAssignmentOne__LinkedList__) */




template <class T>
LinkedList<T>::LinkedList() :_size(0), _head(nullptr) {}

template <class T>
LinkedList<T>::LinkedList( LinkedList<T> const& other) :_head(nullptr)
{copy(other);}


template <class T>
LinkedList<T>& LinkedList<T> :: operator= (LinkedList<T> const& other)
{
    if(this!= &other)
        copy(other);
    
    return *this;
}

template <class T>
LinkedList<T>:: ~LinkedList<T>()
{deleteRest(_head);}

template <class T>
void LinkedList<T>::pushFront(T val)
{
    LinkedList<T> :: Node* p=new Node (val);
    p->_next=_head;
    _head=p;
    _size++;
    
}

template <class T>
void LinkedList<T>::pushBack(T val)
{
    
    Node *pPrev, *p=new Node (val);
    
    if (empty())
    {
        _head=p;
        p->_next=NULL;
        _size++;
        
    }
    
    else
    {
        pPrev=_head;
        
        while (pPrev->_next!=NULL)
        {
            pPrev=pPrev->_next;
        }
        pPrev->_next=p;
        p->_next=NULL;
        _size++;
    }
    
}


template <class T>
T LinkedList<T>::popFront()
{
    if(empty())
    {
        throw std::out_of_range("out of range in LinkedList<T>::popFront()");
        
    }
    
    Node *p =_head;
    _head=p->_next;
    
    T result =p->_val;
    
    delete p;
    _size--;
    
    return result;
    
}

template <class T>
T LinkedList<T>::popBack()
{
    if(empty())
    {
        throw std::out_of_range("out of range in LinkedList<T>::popBack()");
        
    }
    
    
    
    Node*p, *pPrev;
    p=_head;
    
    while (p->_next!=nullptr)
    {
        pPrev=p;
        p=p->_next;
    }
    
    T result=p->_val;
    pPrev->_next=nullptr;
    delete p;
    
    _size--;
    return result;
    
}

template <class T>
void LinkedList<T>::deleteNode(Node* node)
{
    LinkedList<T>::Node *p = _head, *pPrev= _head;
    while (p->_next != nullptr && p->_next !=node)
    {
        pPrev=p;
        p=p->_next;
    }
    
    if(p->_next == nullptr)
        return;     //Node not found
    
    pPrev->_next=p->_next;
    delete p;
    _size--;
}

template <class T>
bool LinkedList<T>::empty() const
{return _head==nullptr;}



template<class T>
void LinkedList<T>::copy (LinkedList const& other)
{
    if (_head!=NULL)
    {
        deleteRest(_head);
        
    }
    
    if(other._head== nullptr)
    { _head=nullptr; return;}
    
    _head=new Node (other._head->_val);
    
    LinkedList<T>::Node *p =_head, *pPrev=_head, *q=other._head;
    
    while(q->_next != nullptr)
    {
        pPrev=p;
        pPrev->_val=q->_val;
        
        q=q->_next;
    }
    
    p->_next=nullptr;
    
}


template <class T>
void LinkedList<T>::deleteRest(Node* from)
{
    
    LinkedList<T>::Node *current = _head, *next;
    
    while (current != NULL)
    {
        next = current->_next;
        free(current);
        current = next;
    }
    
    
    _head = NULL;
}



template <class T>
const typename LinkedList<T>::Node* LinkedList<T>::front() const
{
    
    return _head;
}

template <class T>
const typename LinkedList<T>::Node* LinkedList<T>::back() const
{
    
    LinkedList<T>::Node* p=_head;
    while (p->_next!=NULL)
    {
        p=p->_next;
    }
    
    return p;
    
}

template <class T>
void LinkedList<T>::Display()
{
    LinkedList<T>::Node* p=_head;
    
    while (p->_next!=NULL)
    {
        cout<<p->_val<<",";
        p=p->_next;
    }
    cout<<p->_val;
}



template <class T>
ostream& operator<<(ostream& os, LinkedList<T>&  list)
{
    os<<"LinkedListT<T>";
    if (list.empty())
    {
        return os<<"(empty)"<<endl;
    }
    
    else
    {
        
    cout<<"[";
    
        list.Display();
    }
    
    return os<<"]";
}

