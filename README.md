
# proFile - Employee Information Management System

Welcome to proFile, an Employee Information Management System designed to streamline employee management processes for companies. With its user-friendly interface and robust functionality, proFile offers various features to manipulate employee data efficiently.


## Features
 - Add a new employee with their personal information and dependent details
 - Print data of all employees in the system
 - Print data of a specific employee based on their position in the list
 - Search for employee information based on their empId
 - Search for employee information based on their full name
 - Count the total number of employees
 - Sort the employees based on their empId
 - Remove a specific employee from the list
 - Remove all employees from the list
 - Exit the program
## Usage
1. **Add a new employee**
 -  Choose option 1 from the menu.
 - Enter the employee's first name and last name.
 - Enter the names of dependents one by one.
 - Confirm if you have more dependents.
 - The system will generate a unique empId for the employee.

2. **Print data of all employees**
 - Choose option 2 from the menu.
 - The system will display the information of all employees.

3. **Print employee data at position n**
 - Choose option 3 from the menu.
 - Enter the position of the employee you want to view.
 - The system will display the information of the selected employee.

4. **View employee data based on empId**
 - Choose option 4 from the menu.
 - Enter the empId of the employee you want to view.
 - The system will display the information of the employee with the given empId.

5. **View employee data based on full name**
 - Choose option 5 from the menu.
 - Enter the full name (first name + last name) of the employee you want to view.
 - The system will display the information of the employee with the given full name.

6. **Count number of employees**
 - Choose option 6 from the menu.
 - The system will display the total number of employees.

7. **Sort employee data by empId**
 - Choose option 7 from the menu.
 - The system will sort the employees based on their empId and display the sorted list.

8. **Fire the nth employee**
 - Choose option 8 from the menu.
 - Enter the position of the employee you want to fire.
 - The system will remove the selected employee from the list.

9. **Fire all employees**
 - Choose option 9 from the menu.
 - Confirm that you want to remove all employees.
 - The system will remove all employees from the list.
## How to Run
1. Hit > on the keyboard to use github        codespaces  OR

   Clone the repository: git clone https://github.com/Jayden-Revelpulle/proFile.git

2. Navigate to project directory:
   cd proFile

3. Compile the program:
   make proFile

4. Run the program:
   ./bin/proFile

## Notes
- This program uses a linked list to store employee data.
- Upon running the program, 4 employees will automatically be loaded into the linked list
- Employee empId is generated based on a specific formula.
- The program prompts users to input data using the command line and performs various operations on the employee data.
- The program provides an interactive menu-driven command-line interface.
