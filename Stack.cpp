#include<iostream>
using namespace std;
#include "Stack.h"

void cStack::push(int value)
{
	this->asStack.insertNode(value);
}

int cStack::pop()
{
	int size = this->asStack.sizeOfList();
	if (size != 0)
	{
		int value = this->asStack.getData(size - 1);
		this->asStack.deleteNode(size - 1);
		return value;
	}
	else
	{
		return -1;
	}
}
int cStack::top()
{
	return this->asStack.getData(asStack.sizeOfList() - 1);
}
int cStack::stackSize()
{
	return this->asStack.sizeOfList();
}