#include "../include/header.h"

int lookOnId (struct employee * headLL, int whichEmpId) {
    struct employee *tempHead;
    tempHead = headLL;
    int count = 1;

    if(tempHead == NULL) {
        printf("The list is empty\n");
    }
    else {
        while(tempHead != NULL) {
            if(tempHead->empId == whichEmpId) {
                return count;
            }
            else {
                count++;
                tempHead = tempHead->nextEmployee;
            }
        }
    }
    return -1;
}