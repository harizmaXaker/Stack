#include"main.h"
template <class T>
Stack_LIFO::Stack_LIFO():
	_size(20), _top(-1)
{
	T* pMem = new T[_size];
}

template <class T>
Stack_LIFO::Stack_LIFO(int size):
	_size(20), _top(-1)
{
	T* pMem = new T[_size];
}

template <class T>
Stack_LIFO::~Stack_LIFO()
{
	delete[] pMem;
}

template <class T>
bool Stack_LIFO::push(T elem)
{
	if(full())
	{
		cout << "Stack is full!\n";
		return false;
	}
	++_top;
	*(pMem+_top) = elem;
	return true;
}

template <class T>
T Stack_LIFO::pop()
{
	if(empty())
	{
		cout << "Stack is empty!\n";
		return -1;
	}
	int tmp = *(pMem+_top);
	--_top;
	return tmp;
}

template <class T>
int Stack_LIFO::size()
{
	return _size;
}

template <class T>
void Stack_LIFO::print()
{
	if(empty())
	{
		cout << "Stack is empty! Nothing to print!\n";
		return;
	}
	for(int i = _top; i>=0; i--)
	{
		if(i == _top)
			cout << "_top =>\t[" << setw(3) << *(pMem+i) << "]\n";
		else
			cout << "\t[" << setw(3) << *(pMem+i) << "]\n";
	}
}

template <class T>
int Stack_LIFO::peek()
{
	return _top;
}

template <class T>
bool Stack_LIFO::full()
{
	if(_top == (_size-1))
		return true;
	return false;
}

template <class T>
bool Stack_LIFO::empty()
{
	if(_top == -1)
		return true;
	return false;
}