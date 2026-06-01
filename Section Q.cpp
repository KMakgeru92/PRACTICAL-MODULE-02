#include <iostream>
#include <list>
using namespace std;

int main() {
    //  Define a standard list
    list<int> myList;

    //  Insert into a list
    myList.push_back(10); // insert at end
    myList.push_front(5); // insert at beginning
    myList.insert(++myList.begin(), 7); // insert at specific position

    cout << "List after insertions: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Delete from a list
    myList.pop_front(); // remove first element
    myList.pop_back();  // remove last element

    cout << "List after deletions: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    //  Insert and remove items from anywhere
    auto it = myList.begin();
    myList.insert(it, 20); // insert at beginning
    it = myList.begin();
    myList.erase(it);      // remove first element

    cout << "Final list: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
