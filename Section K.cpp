#include <iostream>
using namespace std;

int main() {
    //  Declare pointers
    int *ptr;

    //  Initialise pointers
    int value = 42;
    ptr = &value; // pointer now holds the address of 'value'

    //  Obtain the address of a variable
    cout << "Address of value: " << &value << endl;
    cout << "Pointer stores address: " << ptr << endl;

    // Access variable by its address using pointer
    cout << "Value via pointer: " << *ptr << endl;

    // Modify the value using pointer
    *ptr = 99;
    cout << "Modified value: " << value << endl;

    return 0;
}
