#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    try {
        //  Throw exceptions
        if (b == 0) {
            throw runtime_error("Division by zero error!");
        }

        //  Catch exceptions
        cout << "Result of division: " << a / b << endl;
    }
    catch (runtime_error &e) {
        //  Use try and catch keywords
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues safely after handling exception." << endl;

    return 0;
}
