#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    double gpa;
};

void displayStudents(const vector<Student>& students) {
    cout << "\nDanh sach sinh vien:\n";

    for (int i = 0; i < students.size(); i++) {
        cout << i + 1 << ". "
             << students[i].name
             << " - GPA: "
             << students[i].gpa << endl;
    }
}

int main() {
    vector<Student> students = {
        {"Nguyen Van An", 8.5},
        {"Tran Thi Binh", 7.8},
        {"Le Van Cuong", 9.1}
    };

    cout << "QUAN LY SINH VIEN\n";

    displayStudents(students);

    return 0;
}