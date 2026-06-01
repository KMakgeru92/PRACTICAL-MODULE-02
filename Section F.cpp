#include <iostream>
#include <algorithm> // for sort and fill
using namespace std;

int main() {
    //  Declare an array
    int arr[5];

    //  Initialise an array
    int arrInit[5] = {10, 20, 30, 40, 50};

    //  Pointer to an array
    int *ptr = arrInit;
    cout << "Pointer to first element: " << *ptr << endl;

    //  Access elements by index
    cout << "Second element: " << arrInit[1] << endl;

    //  Access values of an array
    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arrInit[i] << " ";
    }
    cout << endl;

    //  Add elements (assign new values)
    arrInit[2] = 99; // replaces 30
    cout << "Updated third element: " << arrInit[2] << endl;

    //  Print array elements
    cout << "Printing array: ";
    for (int i = 0; i < 5; i++) {
        cout << arrInit[i] << " ";
    }
    cout << endl;

    //  Delete elements (simulate by setting to 0)
    arrInit[1] = 0;
    cout << "After deletion: ";
    for (int i = 0; i < 5; i++) {
        cout << arrInit[i] << " ";
    }
    cout << endl;

    //  Find min and max
    int minVal = arrInit[0], maxVal = arrInit[0];
    for (int i = 1; i < 5; i++) {
        if (arrInit[i] < minVal) minVal = arrInit[i];
        if (arrInit[i] > maxVal) maxVal = arrInit[i];
    }
    cout << "Min: " << minVal << ", Max: " << maxVal << endl;
