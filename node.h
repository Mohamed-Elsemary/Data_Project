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
    void setitem(const int& num);
    void setnext( node* nextptrpoiner);
    int getitem()const;
    node* getnext()const;
    
};
