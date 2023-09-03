#include "../include/header.h"

void fireOne (a3Emp ** headLL, int whichOne) {
    a3Emp *previous = *headLL;
    a3Emp *current = *headLL;
    int firedId;

    if(*headLL == NULL) {//if list is already empty
        printf("The list is already empty\n");
    }
    else if(whichOne == 1) {//delete first node if whichOne is 1
        *headLL = current->nextEmployee; //assign head to second node
        firedId = current->empId; //get the id of the first node
        for(int i = 0; i < current->numDependents; i++) {
            free(current->dependents[i]);
        }
        free(current->dependents);
        free(current); //free the first node
        //current = NULL; //intialize current to NULL
        printf("Employee [Id: %d] fired.\n", firedId); //print the id of the employee who was fired
    }
    else {
        while(whichOne != 1) {
            previous = current; //assign previous to the current node
            current = current->nextEmployee; //assign current to the nextNode
            whichOne--; //decrement whichOne
        }
        previous->nextEmployee = current->nextEmployee; //establish new link
        firedId = current->empId; //get id of the employee being fired
        for(int i = 0; i < current->numDependents; i++) {
            free(current->dependents[i]);
        }
        free(current->dependents);
        free(current); //free the node pointed to by current
        current = NULL; //initialize current to NULL
        printf("Employee [Id: %d] fired.\n", firedId); //print the id of the employee who was fired
    }
}