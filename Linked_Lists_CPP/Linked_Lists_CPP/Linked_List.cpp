

class Node
{
public:
	int Value;
	Node* Next;

	Node(int value)
	{
		Value = value;
	}
private:


};

class LinkedList
{
public:
	Node* Head;
	Node* Tail;
	bool IsEmpty;

	LinkedList()
	{
		Head = nullptr;
		Tail = Head;
		IsEmpty = true;
	}

	void AddFirst(int value)
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
	void AddLast(int value)
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
	//AddBefore(Node* node, int value)
	// add a new node before the given node
	// hard to do in a singly linked list (easy in a doubly linked list)

	//AddAfter(Node* node, int value)
	// adds new node after given node

	void AddAfter(Node* node, int value)
	{
		if ((Head == nullptr))
		{
			Head = new Node(value);
		}
		else
		{
		
		}
	}

	bool Remove(int value)
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

	void clear()
	{
		//call delete on each item in linked list

		Head = nullptr;
		count = 0;
		IsEmpty = true;
		delete Head;
	}

	bool Contains(int value)
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
private:
	int count;

};