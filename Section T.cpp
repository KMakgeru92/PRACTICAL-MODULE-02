#include <iostream>
using namespace std;

int divide(int a, int b) {
    return a / b; // Potential runtime error if b == 0
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // Intentional bug: loop runs one step too far
    for (int i = 0; i <= 5; i++) {  
        sum += numbers[i]; // Out-of-bounds access when i == 5
    }

    cout << "Sum = " << sum << endl;

    // Another bug: division by zero
    int result = divide(10, 0);
    cout << "Result = " << result << endl;

    return 0;
}
