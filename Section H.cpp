#include <iostream>
using namespace std;

//  Define values and declare an enumerated type
enum Color { RED, GREEN, BLUE };

//  Write a function that swaps two values
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//  Return a reference type variable
int& getElement(int arr[], int index) {
    return arr[index]; // returns reference to element
}

int main() {
    //  Using enumerated type
    Color myColor = GREEN;
    cout << "My color value: " << myColor << endl; // prints 1 (GREEN)

    // Create reference variables
    int x = 10;
    int &refX = x; // reference variable
    cout << "Original x: " << x << ", Reference: " << refX << endl;

    //  Swap two values
    int a = 5, b = 7;
    cout << "Before swap: a=" << a << ", b=" << b << endl;
    swapValues(a, b);
    cout << "After swap: a=" << a << ", b=" << b << endl;

    //  Return reference type variable
    int arr[3] = {100, 200, 300};
    getElement(arr, 1) = 999; // modifies arr[1] directly
    cout << "Modified array: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
