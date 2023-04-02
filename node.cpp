#include "node.h"

node::node()
{
	setnext(NULL);
}

node::node(int n)
{
	number = n;
}

node::node(int n, node*ptr)
{
	number = n;
	next = ptr;
}

void node::setitem(const int& num)
{
	number = num;
}

void node::setnext(node* nextptrpoiner)
{
	next = nextptrpoiner;
}

int node::getitem() const
{
	return number;
}

node* node::getnext() const
{
	return next;
}

