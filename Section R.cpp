#include <iostream>
#include <cmath>   // for built-in functions
using namespace std;

//  Function declaration/prototype
int add(int a, int b);  

//  User-defined function
int multiply(int a, int b) {
    return a * b;
}

int main() {
    //  Invoke built-in functions
    double num = 16.0;
    cout << "Square root of " << num << " is " << sqrt(num) << endl;

    //  Call a function (user-defined)
    int result = multiply(4, 5);
    cout << "Multiplication result: " << result << endl;

    //  Pass arguments
    int sum = add(10, 20);
    cout << "Sum result: " << sum << endl;

    return 0;
}

//  Define function after prototype
int add(int a, int b) {
    return a + b;
}
