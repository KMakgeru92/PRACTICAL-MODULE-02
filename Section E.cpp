#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter a number (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected ONE" << endl;
            break;
        case 2:
            cout << "You selected TWO" << endl;
            break;
        case 3:
            cout << "You selected THREE" << endl;
            break;
        case 4:
            cout << "You selected FOUR" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
