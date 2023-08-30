#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne) {
    struct employee *tempHead; 
    tempHead = headLL;
    int count = 1;
    int found = 0;

    if(tempHead == NULL) {//if list is empty
        printf("The list is empty\n");
    }
    else {
        while(tempHead != NULL) {//traverse the list
            if(count == whichOne) {//when the correct node is found, prints its members
                printf("Employee id: %d\n", tempHead->empId);
                printf("First Name: %s\n", tempHead->fname);
                printf("Last Name: %s\n", tempHead->lname);
                printf("Dependants[%d]: ", tempHead->numDependents);
                for(int i = 0; i < tempHead->numDependents; i++) {
                    printf("%s ", tempHead->dependents[i]);
                }
                found = 1;
                printf("\n");
                break;
            }
            else {//increment count and move to the next node
                count++;
                tempHead = tempHead->nextEmployee;
            }
        }
    }
    if(found != 1) {//if the employee can't be found
        printf("Employee %d could not be found\n", whichOne);
    }
}