#pragma once
template<typename T>

class QueueADT
{
public:
	virtual bool is_empty()=0;
	virtual void enqueue(T)=0;
	virtual void dequeue() = 0;
	virtual T peek() = 0;
	virtual void display() = 0;

	virtual ~QueueADT(){};
};