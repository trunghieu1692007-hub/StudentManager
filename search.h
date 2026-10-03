#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    double gpa;
};

void displayStudents(const vector<Student>& students);

void searchStudent(const vector<Student>& students);

#endif