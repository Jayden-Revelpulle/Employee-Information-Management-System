#include "../include/header.h"

void fireAll (a3Emp ** headLL) {
    a3Emp *tempHead  = *headLL;
    a3Emp *previous = *headLL;

    if(tempHead == NULL) {
        printf("The list is already empty\n");
    }
    else {
        while (tempHead != NULL) {//traverse linked list
            previous = tempHead;
            tempHead = tempHead->nextEmployee;
            for(int i = 0; i < previous->numDependents; i++) {
                free(previous->dependents[i]);
            }
            free(previous->dependents);
            free(previous);
        }
    }
    *headLL = NULL;
}