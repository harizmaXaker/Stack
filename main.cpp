#include "main.h"

int main()
{
	Stack *pStack = new Stack_LIFO(100);
	for(int i=0; i<20; i++)
	{
		pStack->push(i*20);
	}
	pStack->print();
	cout << "\n\nPop from stack: " << pStack->pop() << endl;
	cout << endl;
	pStack->print();
	return 0;
}