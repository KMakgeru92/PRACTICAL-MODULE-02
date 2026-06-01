#include <iostream>
using namespace std;

int main() {
    //  Declare and initialise loop control variables
    int i = 0;

    //  Execute the loop body (using a while loop)
    cout << "While loop example:" << endl;
    while (i < 5) {
        cout << "i = " << i << endl;
        i++;
    }

    // Reset for next example
    i = 0;

    //  Declare and initialise do-while loop
    cout << "\nDo-while loop example:" << endl;
    do {
        cout << "i = " << i << endl;
        i++;
    } while (i < 5);

    //  Nested do-while loop
    cout << "\nNested do-while loop example:" << endl;
    int outer = 1;
    do {
        int inner = 1;
        do {
            cout << "Outer = " << outer << ", Inner = " << inner << endl;
            inner++;
        } while (inner <= 3);
        outer++;
    } while (outer <= 2);

    return 0;
}
