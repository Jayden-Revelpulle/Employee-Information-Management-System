#include "../include/headerA3.h"

void recruitEmployee (struct employee ** headLL) {
    char fnameInput[MAX_LENGTH];
    char lnameInput[MAX_LENGTH];
    int dependents = 0;
    int randNum = 0;
    char answer = 'y';
    char buffer[MAX_LENGTH];
    struct employee *tempHead = *headLL;
    struct employee *newNode = NULL;
    newNode = malloc(sizeof(struct employee));
    
    //initialize input arrays
    fnameInput[0] = '\0';
    lnameInput[0] = '\0';
    //create and populate newNode
    //get first name of employee
    printf("Enter the first name of the employee: ");
    scanf("%s", fnameInput);
    strcpy(newNode->fname, fnameInput);

    //get last name of employee
    printf("Enter the last name of the employee: ");
    scanf("%s", lnameInput);
    strcpy(newNode->lname, lnameInput);
 
    buffer[0] = '\0'; //initialize buffer
    newNode->dependents = malloc(sizeof(char *) * (dependents + 1)); //allocate length of dependents array
    do {//get dependents
        printf("Enter the name of dependent # %d: ", dependents + 1);
        scanf("%s", buffer);
        newNode->dependents = realloc(newNode->dependents, sizeof(char *) * (dependents + 1));
        newNode->dependents[dependents] = malloc(sizeof(char) * (strlen(buffer) + 1));
        strcpy(newNode->dependents[dependents], buffer);
        newNode->dependents[dependents][strlen(buffer)] = '\0';
        buffer[0] = '\0';
        dependents++;
        printf("Do you have any more dependents? (y/n) ");
        scanf(" %c", &answer);
    } while(answer == 'y' || answer == 'Y');
        
    newNode->numDependents = dependents; //initialize numDependents
    printf("You have %d dependent(s).\n", newNode->numDependents);

    //generate empId
    newNode->empId = 0;
    for(int i = 0; i < strlen(fnameInput); i++) {//accumalate ascii values
        newNode->empId += (int)(fnameInput[i]);
    }
    newNode->empId += strlen(lnameInput); //accumalate length of last name
    while(tempHead != NULL) {//add random number between 1 and 999 if same empId is found
        if(newNode->empId == tempHead->empId) {
            randNum = rand() % 999 + 1;
            newNode->empId += randNum;
        }
        else {
            tempHead = tempHead->nextEmployee;
        }
    }
    printf("Your computer generated empId is %d\n", newNode->empId);

    newNode->nextEmployee = NULL; //set nextEmployee of newNode to NULL to terminate the list
       
    if(*headLL == NULL) {
        *headLL = newNode;
    }
    else {
        tempHead = *headLL;
        while(tempHead->nextEmployee != NULL) {//traverse to end of linked list
            tempHead = tempHead->nextEmployee;
        }
        tempHead->nextEmployee = newNode; //add newNode to end of list
    }
}