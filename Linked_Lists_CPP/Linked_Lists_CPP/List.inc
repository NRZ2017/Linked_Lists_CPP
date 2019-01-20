#pragma once
#include "List.h"

template <typename T>
void List<T>::AddFirst(T item)
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

template <typename T>
void List<T>::AddLast(T item)
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

template <typename T>
bool List<T>::Remove(T item)
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
	}
	return false;
}