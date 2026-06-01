#include <iostream>
#include <string>
using namespace std;

//  Declare a class
class Student {
private:
    string name;
    int age;

public:
    //  Initialise objects using constructors
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    //  Define class member functions
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    //  Destroy class objects with destructors
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    //  Declare class objects
    Student s1("Alice", 20);

    //  Create multiple objects
    Student s2("Bob", 22);
    Student s3("Charlie", 19);

    //  Access class members
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    return 0;
}
