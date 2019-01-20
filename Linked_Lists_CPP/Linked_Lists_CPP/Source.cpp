#include "LinkedList.h"

int main()
{ 
	LinkedList list;
	Node* node = new Node(77);
	list.AddFirst(34);
	list.AddFirst(1);
	list.AddLast(2);
	list.AddLast(3);
	list.AddFirst(0);
	list.AddFirst(555);
	list.Remove(0);
	list.AddAfter(node, 77);
	list.Clear();
}