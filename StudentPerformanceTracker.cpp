#include <iostream>
#include <vector>
using namespace std;


/*

? You are tasked with developing a Student Performance Tracker program to manage and analyze grades for a class of students.
? The program should be designed with functions to ensure modularity, implement procedural abstraction, and use arrays to handle student grades.
? The system should allow the user to perform various operations through a menu-driven interface.

todo 1. Grade Input and Validation: Write a function to input grades for all students, ensuring each grade is between 0 and 100.

todo 2. Data Display: Implement a function to display all the grades entered.

todo 3. Statistics: Include functions to calculate and display the following:
    *The average grade for the class.
    *The highest and lowest grades.
    *The number of students who failed

todo 4. Grade Categorization: Add a function to categorize grades into ranges:
    *0-49: Failing
    *50-69: Average
    *70-89: Good
    *90-100: Excellent
    *The function should display the count of students in each category.

todo 5. Sorting: Write a function to sort the grades in ascending order and display the sorted list.

todo 6. Search: Include a function that allows the user to search for a specific student's grade based on their position in the array.
        Validate the input to ensure it is within the valid range of positions.
        The main program should use a menu-driven interface to allow users to repeatedly select and perform operations
        (e.g., view grades, calculate statistics, categorize grades, sort grades, search for a grade).
        The program should exit only when the user explicitly chooses to do so.
        Ensure the code is modular, with each function performing a specific task, and validate all inputs to ensure the program operates correctly.

*/



//* Function to input grades with validation =========================================================================================
void inputGrades(int grades[], int& numStudents) {
    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > 100) {
        cout << "Invalid number of students. Please enter a value between 1 and 100.\n";
        return;
    }

    for (int i = 0; i < numStudents; ++i) {
        do {
            cout << "Enter grade for student " << i + 1 << " (0-100): ";
            cin >> grades[i];
            if (grades[i] < 0 || grades[i] > 100)
                cout << "Invalid grade. Please enter a value between 0 and 100.\n\n";
        } while (grades[i] < 0 || grades[i] > 100);
    }
}

//* Function to display Grades =========================================================================================

void displayGrades(const int GRADES[], int numStudents){

    if (numStudents == 0){
        cout << "no grades are available to display" << endl;
        return;
    }

    cout << "Grades:" << endl;

    for(int i = 0; i < numStudents; i++){
        cout << "Student " << i + 1 << ": " << GRADES[i] << endl;
    }
}






int main(){

    const int MAX_STUDENTS = 100; 
    int grades[MAX_STUDENTS];   
    int numStudents = 0;        


inputGrades(grades, numStudents);

displayGrades(grades, numStudents);












    return 0;
}
