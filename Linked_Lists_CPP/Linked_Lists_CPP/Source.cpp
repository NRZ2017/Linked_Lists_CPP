#include "Linked_List.cpp"

int main()
{ 
	LinkedList list;
	list.AddFirst(34);
	list.AddFirst(1);
	list.AddLast(2);
	list.AddLast(3);
	list.AddFirst(0);
	list.AddFirst(555);
	list.Remove(0);
	list.RemoveAt(2);
	list.Contains(34);
	list.clear();

	//
}