#include <iostream>
#include <vector>
#include "search.h"

using namespace std;

int main() {
    vector<Student> students = {
        {"Nguyen Van An", 8.5},
        {"Tran Thi Binh", 7.8},
        {"Le Van Cuong", 9.1}
    };

    cout << "===== QUAN LY SINH VIEN =====\n";

    displayStudents(students);

    searchStudent(students);

    return 0;
}