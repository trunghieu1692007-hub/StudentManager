void searchStudent(const vector<Student>& students) {
    string name;

    cout << "Nhap ten sinh vien can tim: ";
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].name == name) {
            cout << "Tim thay sinh vien!\n";
            cout << "Ten: " << students[i].name << endl;
            cout << "GPA: " << students[i].gpa << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Khong tim thay sinh vien!\n";
    }
}