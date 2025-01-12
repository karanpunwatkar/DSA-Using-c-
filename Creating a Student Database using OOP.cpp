#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Class definition
class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    // Method to input student details
    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); // Clear the input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Method to display student details
    void displayDetails() const {
        cout << "Roll Number: " << rollNumber
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        Student s;
        cout << "\nEntering details for student " << i + 1 << ":\n";
        s.inputDetails(); // Input details for each student
        students.push_back(s); // Add student to the vector
    }

    cout << "\n--- Student Details ---\n";
    for (const Student& s : students) {
        s.displayDetails(); // Display details of each student
    }

    return 0;
}
