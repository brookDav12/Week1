#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter Value: " << std::endl;
		std::cin >> q->value;
		q = q->next;
	}
}

void cleanQueue(Queue* q)
{
	while (q != NULL)
	{
		Queue* temp = q;
		q = q->next;
		delete temp;
	}
}

void enqueue(Queue* q, unsigned int newValue)
{
	Queue* a = new Queue;
	std::cout << "Enter Value: " << std::endl;
	std::cin >> a->value;
	while (q->next != NULL)
	{
		q = q->next;
	}
	q->next = a;
}

int dequeue(Queue* q)
{
	Queue* t = q;
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

bool isEmpty(Queue* s)
{
	while (s != NULL)
	{
		if (s->value != 0)
		{
			return false;
		}
		s = s->next;
	}
	return true;
}

bool isFull(Queue* s)
{
	while (s != NULL)
	{
		if (s->value == 0)
		{
			return false;
		}
		s = s->next;
	}
	return true;
}