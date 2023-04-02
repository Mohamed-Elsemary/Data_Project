
#pragma once
template<typename T>

class nodeADT
{
public:
    
    virtual void setitem(const T& num)=0;
    virtual void setnext( node* nextptrpoiner)=0;
    virtual T getitem()const;
    virtual node* getnext()const;
 
};

_______________________________________
#pragma once
#include<iostream>
using namespace std;

class node 
{
private:
    int number;
    node* next;
    int index;
public:
    node();
    node(int);
    node(int, node*);
    
    
};
