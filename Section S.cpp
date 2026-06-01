#include <iostream>
#include <ctime>   // for date and time functions
#include <iomanip> // for formatting
using namespace std;

int main() {
    //  Date and time now
    time_t now = time(0);

    //  Compile date and time
    tm *localTime = localtime(&now);

    //  Date and time print
    cout << "Current date and time: " << asctime(localTime);

    //  Compare date and time
    time_t later = now + 60; // 1 minute later
    if (difftime(later, now) > 0) {
        cout << "Later time is after now." << endl;
    }

    //  Date and time format
    cout << "Formatted date and time: "
         << put_time(localTime, "%Y-%m-%d %H:%M:%S") << endl;

    return 0;
}
