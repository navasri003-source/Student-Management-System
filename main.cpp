#include <iostream>
#include <string>
using namespace std;
struct Student {
    int id;
    string name, course;
    float marks;
};
Student s[100];
int count = 0;
void addStudent() {
    if (count == 100) {
        cout << "Student limit reached!\n";
        return;
    }
    cout << "Enter ID: ";
    cin >> s[count].id;
    for (int i = 0; i < count; i++) {
        if (s[i].id == s[count].id) {
            cout << "ID already exists!\n";
            return;
        }
    }
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s[count].name);
    cout << "Enter Course: ";
    getline(cin, s[count].course);
    cout << "Enter Marks: ";
    cin >> s[count].marks;
    count++;
    cout << "Student added successfully!\n";
}
void viewStudents() {
    if (count == 0) {
        cout << "No students found!\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "\nID: " << s[i].id;
        cout << "\nName: " << s[i].name;
        cout << "\nCourse: " << s[i].course;
        cout << "\nMarks: " << s[i].marks << "\n";
    }
}
void searchStudent() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (s[i].id == id) {
            cout << "Name: " << s[i].name;
            cout << "\nCourse: " << s[i].course;
            cout << "\nMarks: " << s[i].marks << "\n";
            return;
        }
    }
    cout << "Student not found!\n";
}
void deleteStudent() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (s[i].id == id) {
            for (int j = i; j < count - 1; j++)
                s[j] = s[j + 1];
            count--;
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}
int main() {
    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    return 0;
}
