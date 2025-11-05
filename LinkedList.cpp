#include <iostream>
#include "LinkedList.h"

List* addItem(List* q)
{
	List* a = new List;
	std::cout << "Enter Value: " << std::endl;
	std::cin >> a->value;
	a->next = q;
	return a;
}

int removeItem(List* q)
{
	Queue * t = q;
	q = q->next;
	delete t;
	if (q == NULL)
	{
		return -1;
	}
	else
	{
		return q->value;
	}
}