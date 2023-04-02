#pragma once
#include"node.h"
#include"QueueADT.h"
#include"iostream"
using namespace std;
template<typename T>

class Queue: public QueueADT<T>  //first in first out
{
private:
	node* front;
	node* back;
public:
	Queue()
	{
		front = NULL;
		back = NULL;
	}
	bool is_empty()
	{
		if (!front && !back)
			return true;
		return false;
	}

	void enqueue(T value)
	{
		node* ptr = new node(value, NULL);
		if (is_empty())
		{
			front = ptr;
			back = ptr;
		}
		else
		{
			back->setnext(ptr);
			back = ptr;
		}
	}

	void dequeue()
	{
		if (is_empty())
		{
			cout << "queue underflow";
			return;
		}

		if (front == back)
		{
			node* ptr = front;
			front = NULL;
			back = NULL;
			delete ptr;
			
		}
		else {
			node* ptr = front;
			front = front->getnext();
			delete ptr;
		}
	}
	T peek()
	{
		if (is_empty())
		{
			cout << "it's empty ";
			return 0;
		}
		return front->getitem();
	}

	void display() 
	{
		if (!front && !back)
		{
			cout << "it's empty";
			return;
		}

		node* ptr = front;
		while (ptr != NULL)
		{
			cout << ptr->getitem()<<endl;
			ptr = ptr->getnext();
		}
		cout << endl;
	}
};