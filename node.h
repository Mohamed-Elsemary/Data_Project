#include "nodeADT.h"
#include"iostream"
using namespace std;
template<typename T>
	
class node:public nodeADT<T>

private:
    node item;
    node* next;
public:
    
node()
{
	setnext(NULL);
}

node(T i)
{
	item = i;
}

node(int i, node*ptr)
{
	item = i;
	next = ptr;
}

void setitem(const T& i)
{
	item = i;
}

void setnext(node* nextptrpoiner)
{
	next = nextptrpoiner;
}

T node::getitem() const
{
	return item;
}

node*getnext() const
{
	return next;
}

