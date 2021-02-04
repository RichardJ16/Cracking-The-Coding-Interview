#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

/* Question 2.1
Remove Duplicates from an unsorted linked list
*/

struct GENERIC
{
    enum {
      typUndefined,
      typInt,           // 1
      typUint,
      typString,
      typByteString,
      typLong,          // 5
      typFloat,
      typDouble,
    } gType;

    union
    {
        int i;
        unsigned int u;
        char* s;
        long l;
		
    } value;
};

void problemSet() {
	
	LinkedList list = new_LinkedList();
	printf("new list =");
	toString(list);
	
	// Test 1
	
	addToEnd(list, "a");
	addToEnd(list, "b");
	addToEnd(list, "a");
	
	printf("new list =");
	toString(list);
	
	removeDupe(list)
}
LinkedList removeDupe(LinkedList list) {
	
	
	
	return list;
}



int main(int argc, char *argv[]) {
	
	problemSet();
	
}