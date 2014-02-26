#pragma once

#include "main.h"

class Stack
{
public:
	Stack();
	Stack(int size);
	virtual ~Stack();
	virtual bool push(T) = 0;
	virtual T pop() = 0;
	virtual int peek() = 0;
	virtual bool full() = 0;
	virtual bool empty() = 0;
	virtual int size() = 0;
	virtual void print() = 0;
protected:
	unsigned int _size;
	int _top;
};
