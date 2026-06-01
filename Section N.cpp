#include <iostream>
#include <string>
using namespace std;

//  Create a C++ structure
struct Student {
    string name;
    int age;
    double grade;
};

//  Pass a struct to a function as an argument
void printStudent(const Student &s) {
    cout << "Name: " << s.name << ", Age: " << s.age << ", Grade: " << s.grade << endl;
}

int main() {
    // Create struct instances
    Student s1;

    //  Initialise a structure
    s1.name = "Alice";
    s1.age = 20;
    s1.grade = 88.5;

    //  Access a structure
    cout << "Student name: " << s1.name << endl;

    //  Create a pointer to a structure
    Student *ptr = &s1;
    cout << "Access via pointer: " << ptr->name << endl;

    //  Pass struct to function
    printStudent(s1);

    //  Combine data items with struct
    Student s2 = {"Bob", 22, 91.0};
    printStudent(s2);

    return 0;
}
