#include <iostream>

struct Student {
    int studentID;
    double GPA;
};

void printStudentInfo(Student s) {
    std::cout << "Student ID: " << s.studentID << std::endl;
    std::cout << "GPA: " << s.GPA << std::endl;
}

int main() {
    Student alice = {101, 3.8};
    printStudentInfo(alice);

    return 0;
}






