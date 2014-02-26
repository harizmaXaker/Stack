#pragma once

#include"main.h"

template <class T>
class Stack_LIFO:public Stack
{
public:
	Stack_LIFO();
	Stack_LIFO(int size);
	~Stack_LIFO();
	bool push(T elem);
	T pop();
	int size();
	void print();
protected:
	int peek();
	bool full();
	bool empty();
	T* pMem;
};