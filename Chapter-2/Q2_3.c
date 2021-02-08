/* Question 2.3
Delete a middle node given the data
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"

LinkedList deleteMiddle(LinkedList list, char *s) {
	
			
	if (isEmpty(list)) {
		return list;
	}
	
	else {
		
		LinkedListIterator iterator = LL_iterator(list);
		
		while (hasNext(iterator)) {

			void *data = next(iterator);
			char *str = (char*) data;
			
			if (strcmp(str, s) == 0) {

				LL_remove(list, data);
				
			}				
		}
		free(iterator);
		toString(list);
		return list;
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
		
	LinkedList deleteMiddle(LinkedList list, char *s);
	
	char *str;
	char t = 'b';
	str = &t;
	
	deleteMiddle(list, str);

	// Test 2
	LinkedList list2 = new_LinkedList();
	addToEnd(list2, "1");
	addToEnd(list2, "2");
	addToEnd(list2, "3");
	addToEnd(list2, "4");
	addToEnd(list2, "5");
	
	printf("\nNew list = ");
	toString(list2);
	
	char *str2;
	char t2 = '3';
	str2 = &t2;
	
	deleteMiddle(list2, str2);
	
	LL_free(list, false);
	LL_free(list2, false);
}


int main(int argc, char *argv[]) {
	
	problemSet();
	
}