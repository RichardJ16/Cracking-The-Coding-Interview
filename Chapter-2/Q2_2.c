/* Question 2.2
Kth to last element of a linked list (K = 1 being the last index in the list)
*/

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

LinkedList kToLast(LinkedList list, int i) {
	
	LinkedList retList = new_LinkedList();
	
	if (isEmpty(list)) {
		return list;
	}
	
	else {
		
		LinkedListIterator iterator = LL_iterator(list);
		
		while (hasNext(iterator)) {

			void *data = next(iterator);
			char *str = (char*) data;
							
			addToFront(retList, str);
							
		}
		printf("Reversed List = ");
		toString(retList);
		printf("KthToLastIndex = %d \n", i);
		
		if (elementAt(retList, i-1) != NULL) {
			free(iterator);
			printf("KthToLastElement = ");
			printf(elementAt(retList, i-1));
			return retList;
		}
		
		else {
			free(iterator);
			printf("false");
			return retList;
		}
	}
	
}


void problemSet() {
	
	LinkedList list = new_LinkedList();
		
	// Test 1
	
	addToEnd(list, "a");
	addToEnd(list, "b");
	addToEnd(list, "a");
	addToEnd(list, "a");
	
	printf("New list = ");
	toString(list);
		
	LinkedList kToLast(LinkedList list, int i);
	kToLast(list, 1);

	// Test 2
	LinkedList list2 = new_LinkedList();
	addToEnd(list2, "1");
	addToEnd(list2, "2");
	addToEnd(list2, "3");
	addToEnd(list2, "4");
	addToEnd(list2, "5");
	
	printf("\nNew list = ");
	toString(list2);
		
	kToLast(list2, 1);
	
	LL_free(list, false);
	LL_free(list2, false);
}


int main(int argc, char *argv[]) {
	
	problemSet();
	
}