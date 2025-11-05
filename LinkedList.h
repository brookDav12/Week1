#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
	int value;
	List* next;
} List;

List* addItem(List* q);
void removeItem(List* q);

#endif /* LINKEDLIST_H */
