#include "../include/header.h"

void printAll (struct employee * headLL) {
    struct employee *tempHead; 
    tempHead = headLL;
    int employeeCount = 1;

    if(tempHead == NULL) {//if list is empty
        printf("The list is empty\n");
    }
    while(tempHead != NULL) {//print members of each node
        printf("Employee #%d\n", employeeCount);
        printf("\tEmployee id: %d\n", tempHead->empId);
        printf("\tFirst Name: %s\n", tempHead->fname);
        printf("\tLast Name: %s\n", tempHead->lname);
        printf("\tDependants[%d]: ", tempHead->numDependents);
        for(int i = 0; i < tempHead->numDependents; i++) {//print each dependent
            printf("%s", tempHead->dependents[i]);
            if(i < tempHead->numDependents - 1) {
                printf(", ");
            }
        }
        printf("\n");
        employeeCount++;
        tempHead = tempHead->nextEmployee; //move to the next node
    }
    printf("\nThere are currently %d employees\n", employeeCount-1);
}