
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

typedef struct Node* Node;

struct Node {
	void *data;
	Node next;
	Node prev;
};

struct LinkedList {
	Node first;
	Node last;
};

LinkedList new_LinkedList() {
	LinkedList this = (LinkedList)malloc(sizeof(struct LinkedList));
	this->first = this->last = NULL;
	return this;
}

static Node new_Node(void *data) {
	Node this = (Node)malloc(sizeof(struct Node));
	this->data = data;
	this->next = this->prev = NULL;
	return this;
}
 
void LL_free(LinkedList this, bool free_too) {
	
	if (this == NULL) {
		return;
	}

	Node node = this->first;
	while (node != NULL) {
		Node next = node->next;
		if (free_too && node->data != NULL) {
			free(node->data);
		}
		free(node);
		node = next;
	}

	free(this);
}

bool isEmpty(const LinkedList this) {
	return this->first == NULL;
}

void addToFront(LinkedList this, void *data) {
	Node node = new_Node(data);
	node->next = this->first; 
	if (this->first != NULL) {
		this->first->prev = node;
	}
	this->first = node;
	if (this->last == NULL) {
		this->last = node;
	}
}

void addToEnd(LinkedList this, void *data) {
	Node node = new_Node(data);
	node->prev = this->last;
	if (this->last != NULL) {
		this->last->next = node;
	}
	this->last = node;
	if (this->first == NULL) {
		this->first = node;
	}
}

bool contains(const LinkedList this, void *data) {
	for (Node node=this->first; node != NULL; node=node->next) {
		if (node->data == data) {
			return true;
		}
	}
	return false;
}

void LL_remove(LinkedList this, void *data) {
	for (Node node=this->first; node != NULL; node=node->next) {
		if (node->data == data) {
			if (node == this->first) {
				this->first = node->next;
			}
			if (node == this->last) {
				this->last = node->prev;
			}
			if (node->prev != NULL) {
				node->prev->next = node->next;
			}
			if (node->next != NULL) {
				node->next->prev = node->prev;
			}
			free(node);
			return;
		}
	}
}

void* elementAt(LinkedList this, int index) {
	int i = 0;
	for (Node node=this->first; node != NULL; node=node->next) {
		if (i == index) {
			return node->data;
		}
		i += 1;
	}
	return NULL;
}

void* pop(LinkedList this) {
	void *data = elementAt(this, 0);
	if (data != NULL) {
		LL_remove(this, data); // Removes first occurrence
	}
	return data;
}

void iterate(const LinkedList this, void (*func)(void *)) {
	for (Node node=this->first; node != NULL; node=node->next) {
		func(node->data);
	}
}

struct LinkedListIterator {
	Node next;
};

LinkedListIterator LL_iterator(const LinkedList this) {
	LinkedListIterator iterator = (LinkedListIterator)malloc(sizeof(struct LinkedListIterator));
	iterator->next = this->first;
	return iterator;
}

bool hasNext(const LinkedListIterator this) {
	return this->next != NULL;
}

void* next(LinkedListIterator this) {
	if (this->next == NULL) {
		return NULL;
	} else {
		void *data = this->next->data;
		this->next = this->next->next;
		return data;
	}
}

void toString(LinkedList this) {
	printf("[");
	for (Node node=this->first; node != NULL; node=node->next) {
		printf("%s", (char*)(node->data));
		if (node->next != NULL) {
			printf(" ");
		}
	}
	printf("]\n");
}

