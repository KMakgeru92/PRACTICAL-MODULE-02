#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //  Open files
    ofstream outFile("example.txt");

    //  Close files
    if (outFile.is_open()) {
        // PA1303: Write to files
        outFile << "Hello File!" << endl;
        outFile << "Second line." << endl;
        outFile.close();
    }

    //  Read from files
    ifstream inFile("example.txt");
    string line;
    cout << "Reading file content:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    //  Extract characters from files
    ifstream charFile("example.txt");
    char c;
    cout << "Characters extracted: ";
    while (charFile.get(c)) {
        cout << c;
    }
    charFile.close();
    cout << endl;

    //  Compare content of two files
    ifstream file1("example.txt"), file2("example.txt");
    string l1, l2;
    bool same = true;
    while (getline(file1, l1) && getline(file2, l2)) {
        if (l1 != l2) {
            same = false;
            break;
        }
    }
    cout << "Files are " << (same ? "identical" : "different") << endl;
    file1.close();
    file2.close();

    //  Load characters from cin stream directly to file
    ofstream userFile("userInput.txt");
    cout << "Enter a line to save in file: ";
    string userInput;
    getline(cin, userInput);
    userFile << userInput;
    userFile.close();

    //  Peek characters without extracting
    ifstream peekFile("example.txt");
    char peekChar = peekFile.peek();
    cout << "Peeked character: " << peekChar << endl;
    peekFile.close();

    //  Return extracted character on stream
    ifstream extractFile("example.txt");
    char extracted = extractFile.get();
    cout << "Extracted character: " << extracted << endl;
    extractFile.close();

    //  Write bytes to file
    ofstream byteFile("bytes.bin", ios::binary);
    char data[5] = {'A','B','C','D','E'};
    byteFile.write(data, sizeof(data));
    byteFile.close();

    //  Count characters from last operation
    ifstream countFile("example.txt");
    int count = 0;
    while (countFile.get(c)) {
        count++;
    }
    cout << "Character count: " << count << endl;
    countFile.close();

    //  Error handling with IO stream
    ifstream errorFile("nonexistent.txt");
    if (!errorFile) {
        cerr << "Error: Could not open file." << endl;
    }

    return 0;
}
