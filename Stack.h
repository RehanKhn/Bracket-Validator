#pragma once
#include"LinkedList.h"
class cStack
{
private:
public:
	LinkList asStack;
	void push(int value);
	int pop();
	int top();
	int stackSize();
};