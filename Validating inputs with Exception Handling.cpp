#include <iostream>
#include <stdexcept>
using namespace std;

void validateInput(int rollNumber, float marks) {
    if (rollNumber <= 0) {
        throw invalid_argument("Roll number must be positive!");
    }
    if (marks < 0 || marks > 100) {
        throw invalid_argument("Marks must be between 0 and 100!");
    }
}

int main() {
    int rollNumber;
    float marks;

    try {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;

        validateInput(rollNumber, marks);
        cout << "Student record is valid.\n";
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
