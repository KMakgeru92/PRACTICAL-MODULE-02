#include <iostream>
#include <string>
using namespace std;

int main() {
    //  Declare a char
    char ch = 'A';

    //  Print ASCII value
    cout << "ASCII value of " << ch << " is " << int(ch) << endl;

    //  Print char value
    cout << "Character value: " << ch << endl;

    //  Input char
    cout << "Enter a character: ";
    cin >> ch;
    cout << "You entered: " << ch << " (ASCII: " << int(ch) << ")" << endl;

    //  Convert char to string
    string str(1, ch); // create string with single char
    cout << "Converted to string: " << str << endl;

    return 0;
}
