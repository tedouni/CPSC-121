//
//  DblDblLinkedList.h
//  WeekTen
//
//  Created by Tayseer Edouni on 3/28/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __WeekTen__DblDblLinkedList__
#define __WeekTen__DblDblLinkedList__

#include <iostream>

using namespace std;

template <typename T> class DblLinkedListT;
template <typename T> std::ostream& operator<<( std::ostream&, DblLinkedListT<T> const& );

template<class T>
class DblLinkedList
{
    
public:
    DblLinkedList();
    DblLinkedList(DblLinkedList<T> const& other);
    DblLinkedList<T>& operator=(DblLinkedList<T> const& other);
    ~DblLinkedList();
    
    struct Node
    {
        Node (T val): _val(val), _next(nullptr) {}
        T _val;
        Node* _next;
        Node* _back;
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
    
    friend  ostream&  operator<< <T>( ostream& os, DblLinkedListT<T> const& list );
    
    void Display();
    
    
private:
    void copy(DblLinkedList const& other);
    void deleteRest(Node* from);
    Node* back();
    
private:
    size_t _size;
    Node* _head;
    
    
};





#endif /* defined(__WeekEightAssignmentOne__DblLinkedList__) */




template <class T>
DblLinkedList<T>::DblLinkedList() :_size(0), _head(nullptr) {}

template <class T>
DblLinkedList<T>::DblLinkedList( DblLinkedList<T> const& other) :_head(nullptr)
{copy(other);}


template <class T>
DblLinkedList<T>& DblLinkedList<T> :: operator= (DblLinkedList<T> const& other)
{
    if(this!= &other)
        copy(other);
    
    return *this;
}

template <class T>
DblLinkedList<T>:: ~DblLinkedList<T>()
{deleteRest(_head);}

template <class T>
void DblLinkedList<T>::pushFront(T val)
{
    DblLinkedList<T> :: Node* p=new Node (val);
    p->_next=_head;
    _head=p;
    _size++;
    
}

template <class T>
void DblLinkedList<T>::pushBack(T val)
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
T DblLinkedList<T>::popFront()
{
    if(empty())
    {
        throw std::out_of_range("out of range in DblLinkedList<T>::popFront()");
        
    }
    
    Node *p =_head;
    _head=p->_next;
    
    T result =p->_val;
    
    delete p;
    _size--;
    
    return result;
    
}

template <class T>
T DblLinkedList<T>::popBack()
{
    if(empty())
    {
        throw std::out_of_range("out of range in DblLinkedList<T>::popBack()");
        
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
void DblLinkedList<T>::deleteNode(Node* node)
{
    DblLinkedList<T>::Node *p = _head, *pPrev= _head;
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
bool DblLinkedList<T>::empty() const
{return _head==nullptr;}



template<class T>
void DblLinkedList<T>::copy (DblLinkedList const& other)
{
    if (_head!=NULL)
    {
        deleteRest(_head);
        
    }
    
    if(other._head== nullptr)
    { _head=nullptr; return;}
    
    _head=new Node (other._head->_val);
    
    DblLinkedList<T>::Node *p =_head, *pPrev=_head, *q=other._head;
    
    while(q->_next != nullptr)
    {
        pPrev=p;
        pPrev->_val=q->_val;
        
        q=q->_next;
    }
    
    p->_next=nullptr;
    
}


template <class T>
void DblLinkedList<T>::deleteRest(Node* from)
{
    
    DblLinkedList<T>::Node *current = _head, *next;
    
    while (current != NULL)
    {
        next = current->_next;
        free(current);
        current = next;
    }
    
    
    _head = NULL;
}



template <class T>
const typename DblLinkedList<T>::Node* DblLinkedList<T>::front() const
{
    
    return _head;
}

template <class T>
const typename DblLinkedList<T>::Node* DblLinkedList<T>::back() const
{
    
    DblLinkedList<T>::Node* p=_head;
    while (p->_next!=NULL)
    {
        p=p->_next;
    }
    
    return p;
    
}

template <class T>
void DblLinkedList<T>::Display()
{
    DblLinkedList<T>::Node* p=_head;
    
    while (p->_next!=NULL)
    {
        cout<<p->_val<<",";
        p=p->_next;
    }
    cout<<p->_val;
}



template <class T>
ostream& operator<<(ostream& os, DblLinkedList<T>&  list)
{
    os<<"DblLinkedListT<T>";
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



