
#pragma once
template<typename T>

class nodeADT
{
public:
    
    virtual void setitem(const T& num)=0;
    virtual void setnext( node* nextptrpoiner)=0;
    virtual T getitem()const=0;
    virtual node* getnext()const=0;
    
    
};
