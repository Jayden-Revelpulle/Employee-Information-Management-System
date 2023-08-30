#include "../include/headerA3.h"

int main() {
    //menu
    int choice;
    a3Emp *list = NULL;

    //printOne
    int whichEmployee;

    //lookOnId
    int employeeId;
    int foundId;

    //lookOnFullName
    char nameInput[100];
    int foundId2;

    //countEmployees
    int numEmployees;

    //fireOne
    int firePos;

    //fireAll
    char fire;

    loadEmpData(&list, "proFile.txt"); //load data from proFile.txt to populate the linked list
    
    do {//prompt user for menu choice while choice between 1 and 10
        //print menu after each choice
        printf("\n*************************\n");
        printf("Printing Menu Options\n");
        printf("1. Add the data of a new employee\n");
        printf("2. Print the data of all employees\n");
        printf("3. Print the data of the nth employee employee\n");
        printf("4. Finds an employee based on employee id\n");
        printf("5. Finds an employee based on full name\n");
        printf("6. Counts the total number of employees\n");
        printf("7. Sorts employee data in ascending order of employee id\n");
        printf("8 Fire's the nth employee\n");
        printf("9. Fire's all employees\n");
        printf("10.Exit\n");
        printf("*************************\n");

        printf("\nEnter a menu choice (1-10) "); //get user choice
        scanf("%d", &choice);

        switch(choice) {
            case 1: //recruitEmployee
               recruitEmployee(&list);
               break;
            
            case 2: //printAll
               printAll(list);
               break;
            
            case 3: //printOne
               printf("Enter the position of the employee you would like to see: ");
               scanf("%d", &whichEmployee);
               printf("Printing data of employee %d\n", whichEmployee);
               printOne(list, whichEmployee);
               break;

            case 4: //lookOnId
               printf("Enter the id of an employee: "); //get user input
               scanf("%d", &employeeId);
               foundId = lookOnId(list, employeeId);
               if(foundId == -1) {//if function returns -1, the id could not be found
                   printf("Unable to find employee with id %d\n", employeeId);
               }
               else {
                   printOne(list, foundId);
               }
               break;
            
            case 5: //lookOnFullName
               printf("Enter the full name of the employee: "); //get user input
               fgetc(stdin);
               fgets(nameInput, MAX_LENGTH, stdin);
               nameInput[strlen(nameInput)-1] = '\0';
               foundId2 = lookOnFullName(list, nameInput);
               if(foundId2 == -1) {//if function returns -1, the full name could not be found
                   printf("Unable to find employee %s\n", nameInput);
               }
               else {
                   printOne(list, foundId2);
               }
               break;
            
            case 6: //countEmployees
               numEmployees = countEmployees(list);
               if(numEmployees == 0) {//if the function returns 0, there are no employees
                  printf("The list is empty, there are 0 employees\n");  
               }
               else {
                  printf("Total number of employees = %d", numEmployees);
               }
               break;

            case 7: //sortEmployeesId
               printf("After sorting on empId, the employees are as follows:\n");
               sortEmployeesId(list);
               break;
            
            case 8: //fireOne
               numEmployees = countEmployees(list);
               printf("Currently there are %d employees\n", numEmployees);
               printf("Which employee do you wish to fire - enter a value between 1 and %d ", numEmployees); //give user input options
               scanf("%d", &firePos); //get user input
               if(firePos < 1 || firePos > numEmployees) {//if user enters an invalid position
                  printf("Please enter a valid position\n");
               }
               else {
                  fireOne(&list, firePos);
                  numEmployees = countEmployees(list);
                  printf("There are now %d employees", numEmployees);
               }
               break;
            case 9: //fireAll
               printf("Are you sure you want to fire everyone? (y/n) "); //ask user if they want to fire everyone
               scanf(" %c", &fire); //get user input
               if(fire == 'y' || fire == 'Y') {//execute fireAll function if user enters yes
                  fireAll(&list);
                  printf("All fired. Linked list is now empty\n");
               }
               break;
            
            case 10: //exit
               fireAll(&list);
               return 0; //end program
               break;
            
            default: //if user enters and invalid choice
               printf("Invalid Choice\n");
        }
    }
    while(choice > 0 && choice < 11); 
}