#include "../include/headerA3.h"

void sortEmployeesId(struct employee *headLL) {
    struct employee *tempHead = headLL;
    int numEmp;
    int *empIds;
    int index = 0;
    int minVal, minPos, temp;

    numEmp = countEmployees(headLL); //get number of employees using countEmployees function
    empIds = calloc(numEmp, sizeof(int)); //allocate integer array to hold empIds of all employees

    while(tempHead != NULL) {//initialize empIds array with id of each employee
        empIds[index] = tempHead->empId;
        index++;
        tempHead = tempHead->nextEmployee;
    }
    
    for(int i = 0; i < numEmp; i++) {//sort empIds array using selection sort
        minVal = empIds[i];
        minPos = i;
        for(int j = i + 1; j < numEmp; j++) {
            if(empIds[j] < minVal) {
                minPos = j;
                minVal = empIds[j];
            }
        }
        temp = empIds[i];
        empIds[i] = empIds[minPos];
        empIds[minPos] = temp;
    }

    for(int i = 0; i < numEmp; i++) {//print employees in desired order using lookOnId and printOne functions
        printf("Employee #%d:\n", i+1);
        printOne(headLL, lookOnId(headLL, empIds[i]));
        printf("\n");
    }
    
    free(empIds);
}


