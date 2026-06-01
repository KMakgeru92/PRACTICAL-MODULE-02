#include <iostream>
using namespace std;

// A simple class representing a 2D point
class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    //  Overload the + operator
    Point operator+(const Point &p) {
        return Point(x + p.x, y + p.y);
    }

    // Overload the << operator for printing
    friend ostream& operator<<(ostream &out, const Point &p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    // Using overloaded + operator
    Point p3 = p1 + p2;

    cout << "Point 1: " << p1 << endl;
    cout << "Point 2: " << p2 << endl;
    cout << "Point 3 (p1 + p2): " << p3 << endl;

    return 0;
}
