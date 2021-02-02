
#ifndef _LinkedList_h_gf
#define _LinkedList_h_gf

#include <stdbool.h>


typedef struct LinkedList* LinkedList;

extern LinkedList new_LinkedList();

extern void LL_free(LinkedList list, bool free_too);

extern bool isEmpty(const LinkedList this);

extern void addToFront(LinkedList this, void *value);

extern void addToEnd(LinkedList this, void *value);

extern bool contains(const LinkedList this, void *value);

extern void LL_remove(LinkedList this, void *data);

extern void *elementAt(LinkedList this, int index);

extern void *pop(LinkedList this);

extern void iterate(const LinkedList this, void (*func)(void*));

typedef struct LinkedListIterator *LinkedListIterator;

extern LinkedListIterator LL_iterator(const LinkedList this);

extern bool hasNext(const LinkedListIterator iterator);

extern void *next(LinkedListIterator iterator);

extern void toString(LinkedList this);

#endif
