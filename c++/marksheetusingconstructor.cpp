#include <iostream>
using namespace std;

class Student {
    int name;
    int rollNumber;
    int marks[3]; // Array to store marks of 3 subjects
    int totalMarks;
    float percentage;
    public:
    Student(int n, int roll, int m1, int m2, int m3) {
        name = n;
        rollNumber = roll;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        totalMarks = m1 + m2 + m3;
        percentage = (totalMarks / 3.0);
    }

    // Function to display student marksheet
    void displayMarksheet() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << marks[0] << endl;
        cout << "Marks in Subject 2: " << marks[1] << endl;
        cout << "Marks in Subject 3: " << marks[2] << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main() {
    // Creating an array of 5 Student objects
    Student students[5] = {
        Student("John", 1, 85, 90, 78),
        Student("Alice", 2, 88, 92, 80),
        Student("Bob", 3, 76, 85, 80),
        Student("David", 4, 90, 93, 89),
        Student("Eva", 5, 82, 88, 91)
    };

    // Displaying marksheet for all students
    for (int i = 0; i < 5; i++) {
        students[i].displayMarksheet();
    }
}