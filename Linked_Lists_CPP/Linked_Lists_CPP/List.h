#pragma once

template <typename T>
class List
{
public:
	T* data;
	const int& Count = count;

	void AddFirst(T);
	void AddLast(T);
	bool Remove(T);
	//contains

private:
	int count;
};

#include "List.inc"
