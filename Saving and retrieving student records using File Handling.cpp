#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

void writeToFile(Student s) {
    ofstream file("students.txt", ios::app);
    file << s.rollNumber << " " << s.name << " " << s.marks << endl;
    file.close();
    cout << "Record saved successfully!\n";
}

void readFromFile() {
    ifstream file("students.txt");
    string line;

    cout << "\n--- Student Records from File ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int main() {
    Student s;
    int choice;

    do {
        cout << "\n1. Add Student Record\n2. Display Records from File\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s.rollNumber;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s.name);
            cout << "Enter Marks: ";
            cin >> s.marks;

            writeToFile(s);
            break;

        case 2:
            readFromFile();
            break;

        case 3:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
