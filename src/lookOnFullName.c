#include "../include/headerA3.h"

int lookOnFullName (struct employee * headLL, char whichName [100]) {
    struct employee *tempHead;
    tempHead = headLL;
    char fNameInput[100];
    char lNameInput[100];
    char *token;
    int save = 0;
    int count = 1;
    int cmp1 = 0, cmp2 = 0;
    char cmp[100];

    strcpy(cmp, whichName); //copy whichName parameter
    
    //use strtok to separate first and last name
    token = strtok(cmp, " ");
    while(token != NULL) {
        if(save == 0) {
            strcpy(fNameInput, token);
        }
        else {
            strcpy(lNameInput, token);
        }
        save++;
        token = strtok(NULL, " ");
    }
    if(tempHead == NULL) {
        printf("The list is empty\n");
    }
    else {//find position in LL correlating to passed name
        while(tempHead != NULL) {
            //use strcmp to compare the inputs and LL members
            cmp1 = strcmp(tempHead->fname, fNameInput);
            cmp2 = strcmp(tempHead->lname, lNameInput);
            if(cmp1 == 0 && cmp2 == 0) { //if match is found, return its position
                return count;
            }
            else { //if no match, increment count and move to the next node
                count++;
                tempHead = tempHead->nextEmployee;
            }
        }
    }
    return -1; //return -1 if the name can't be found
}