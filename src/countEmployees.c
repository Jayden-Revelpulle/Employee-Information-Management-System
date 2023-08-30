#include "../include/headerA3.h"

int countEmployees (a3Emp * headLL) {
    a3Emp *tempHead;
    tempHead = headLL;
    int employeeCount = 0;

    if(tempHead == NULL) {//return 0 is the list is empty
        return 0;
    }
    else {
        while(tempHead != NULL) {
            employeeCount++;
            tempHead = tempHead->nextEmployee;
        }
    }
    return employeeCount;
}