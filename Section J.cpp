#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of dynamic array: ";
    cin >> size;

    //  Create a dynamic array using new keyword
    int* dynArr = new int[size];

    //  Initialise dynamically allocated arrays
    for (int i = 0; i < size; i++) {
        dynArr[i] = i * 10; // initialise with multiples of 10
    }

    cout << "Dynamic array values: ";
    for (int i = 0; i < size; i++) {
        cout << dynArr[i] << " ";
    }
    cout << endl;

    //  Delete a dynamic array from memory
    delete[] dynArr;
    dynArr = nullptr; // good practice to avoid dangling pointer

    cout << "Dynamic array deleted successfully." << endl;

    return 0;
}
