#include <bits/stdc++.h>
using namespace std;
int main() {
    int id;
    string name, course;
    float marks;
    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Course: ";
    getline(cin, course);
    cout << "Enter Marks: ";
    cin >> marks;
    cout << "\n--- Student Details ---\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Marks: " << marks << endl;
    return 0;
}
