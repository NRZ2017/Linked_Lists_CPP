#pragma once
#include "Node.h"

class LinkedList
{
public:
	Node* Head;
	Node* Tail;
	
	const int& Count = count;

	LinkedList()
	{
		Head = nullptr;
		Tail = Head;
	}

	void AddFirst(int);
	void AddLast(int);
	void AddAfter(Node*, int);
	bool Remove(int);
	void Clear();
	bool Contains(int);

	bool IsEmpty()
	{
		return count == 0;
	}
	
private:
	int count;

};