#include "LinkedList.h"

void LinkedList::AddFirst(int value)
{
	if (Head == nullptr)
	{
		Head = new Node(value);
		Tail = Head;
	}
	else
	{
		Node* tempNode = new Node(value);
		tempNode->Next = Head;
		Head = tempNode;
	}
}

void LinkedList::AddLast(int value)
{
	if (Head == nullptr)
	{
		Head = new Node(value);
		Tail = Head;
	}
	else
	{
		Tail->Next = new Node(value);
		Tail = Tail->Next;
	}
}

void LinkedList::AddAfter(Node* node, int value)
{
	if ((Head == nullptr))
	{
		Head = new Node(value);
	}
	else
	{
		Node* temp = new Node(value);
		Head = temp;
		bool found = false;
		while (!found)
		{
			if (Head->Value != value)
			{
				Head = temp->Next;
			}
			else
			{
				Head->Next = new Node(value);
				Head = Head->Next;
			}
		}
	}
}

bool LinkedList::Remove(int value)
{
	if (Head == nullptr)
	{
		return false;
	}
	else
	{
		if (Head->Value == value)
		{
			Node* deleteMe = Head;
			Head = Head->Next;
			delete deleteMe;
			return true;
		}

		Node* tempNode = Head;
		while (tempNode != nullptr)
		{
			if (tempNode->Next->Value == value)
			{
				Node* deleteMe = tempNode->Next;
				tempNode->Next = tempNode->Next->Next;
				delete deleteMe;
				return true;
			}

			tempNode = tempNode->Next;
		}
		return false;
	}
}

void LinkedList::Clear()
{
	while (Head != nullptr)
	{
		Node* deleteMe = Head;
		Head = Head->Next;
		delete deleteMe;
	}

	count = 0;	
}

bool LinkedList::Contains(int value)
{
	Node* tempNode = Head;
	while (tempNode != nullptr)
	{
		if (tempNode->Value == value)
		{
			return true;
		}
		tempNode = tempNode->Next;
	}
	return false;
}