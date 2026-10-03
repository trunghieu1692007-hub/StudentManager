#include <iostream>
#include "search.h"

using namespace std;

void displayStudents(const vector<Student>& students) {
    cout << "\nDanh sach sinh vien:\n";

    for (int i = 0; i < students.size(); i++) {
        cout << i + 1 << ". "
             << students[i].name
             << " - GPA: "
             << students[i].gpa << endl;
    }
}

void searchStudent(const vector<Student>& students) {
    string name;

    cout << "\nNhap ten sinh vien can tim: ";
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].name == name) {
            cout << "\nTim thay sinh vien!\n";
            cout << "Ten: " << students[i].name << endl;
            cout << "GPA: " << students[i].gpa << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nKhong tim thay sinh vien!\n";
    }
}