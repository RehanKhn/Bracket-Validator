#include"Node.h"
class LinkList
{
public:
	Node* head = NULL;
	void insertNode(int new_data);
	void displayNode();
	int getData(int index);
	void deleteNode(int index);
	void insertionSort(LinkList head);
	int sizeOfList();
};