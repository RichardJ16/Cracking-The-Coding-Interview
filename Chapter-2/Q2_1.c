#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

/* Question 2.1
Remove Duplicates from an unsorted linked list
*/

LinkedList removeDupe(LinkedList list) {
	
	LinkedList retList = new_LinkedList();
	
	if (isEmpty(list)) {
		return list;
	}
	
	else {
		
		LinkedListIterator iterator = LL_iterator(list);
		
		while (hasNext(iterator)) {

			void *data = next(iterator);
			char *str = (char*) data;
						
			if (!contains(retList, str)) {
				
				addToEnd(retList, str);
				
			}
	}
	
	free(iterator);

	}
	printf("List with no duplicates = ");
	toString(retList);
	return retList;
}

void problemSet() {
	
	LinkedList list = new_LinkedList();
		
	// Test 1
	
	addToEnd(list, "a");
	addToEnd(list, "b");
	addToEnd(list, "a");
	
	printf("New list = ");
	toString(list);
		
	LinkedList removeDupe(LinkedList list);
	removeDupe(list);

	// Test 2
	LinkedList list2 = new_LinkedList();
	addToEnd(list2, "1");
	addToEnd(list2, "1");
	addToEnd(list2, "1");
	
	printf("New list = ");
	toString(list2);
		
	removeDupe(list2);
	
	LL_free(list, false);
	LL_free(list2, false);
}


int main(int argc, char *argv[]) {
	
	problemSet();
	
}