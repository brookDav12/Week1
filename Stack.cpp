#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	Stack* a = new Stack;
	a->value = element;
	a->next = s;
}

int pop(Stack* s)
{
	Stack* t = s;
	s = s->next;
	delete t;
	if (s == NULL)
	{
		return -1;
	}
	else
	{
		return s->value;
	}
}

void initStack(Stack* s)
{
	while (s != NULL)
	{
		std::cout << "Enter Value: " << std::endl;
		std::cin >> s->value;
		s = s->next;
	}
}

void cleanStack(Stack* s)
{
	while (s != NULL)
	{
		Stack* temp = s;
		s = s->next;
		delete temp;
	}
}

bool isEmpty(Stack* s)
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

bool isFull(Stack* s)
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