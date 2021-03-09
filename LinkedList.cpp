#include<iostream>
using namespace std;
#include "LinkedList.h"



void LinkList::insertNode(int new_data)
{
	Node *newNode = new Node();
	newNode->data = new_data;
	newNode->next = NULL;
	if (head != NULL)
	{
		Node *t;
		t = head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = newNode;
	}
	else
	{
		head = newNode;
	}
}
void LinkList::displayNode()
{
	Node *t;
	t = head;
	cout << "\t\t Entered DATA" << endl;
	while (t != NULL)
	{
		cout << t->data << endl;
		t = t->next;
	}
}
int LinkList::getData(int index)
{
	int d = 0;
	Node *t;
	t = head;
	int counter = 0;
	while (t != NULL)
	{
		if (counter == index)
		{
			d = t->data;
			break;
		}
		else
		{
			counter++;
			t = t->next;
		}
	}
	return d;
}
void LinkList::deleteNode(int index)
{
	int count = 0;
	Node *p, *prev;
	prev = head;
	p = prev;
	if (index == 0)
	{
		head = head->next;
	}
	while (p != NULL&&count != index)
	{
		prev = p;
		p = p->next;
		count++;
	}
	if (p == NULL)
	{
		cout << "linklist ended before" << endl;
	}
	else
	{
		prev->next = p->next;
	}
}

void LinkList::insertionSort(LinkList test)
{
	Node *ptr, *text;
	ptr = test.head;
	text = test.head;
	while (text != NULL)
	{
		while (ptr->next != NULL)
		{
			if (ptr->data > ptr->next->data)
			{
				int temp;
				temp = ptr->next->data;
				ptr->next->data = ptr->data;
				ptr->data = temp;
			}
			ptr = ptr->next;
		}
		text = text->next;
		ptr = test.head;
	}
}

int LinkList::sizeOfList()
{
	Node *t;
	int counter = 0;
	t = head;
	while (t != NULL)
	{
		counter++;
		t = t->next;
	}

	return counter;
}