#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor to initialize the coordinates
    Point(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}

    // Overload == (equality)
    bool operator==(const Point &other) const {
        return (x == other.x && y == other.y);
    }

    // Overload != (inequality)
    bool operator!=(const Point &other) const {
        return !(*this == other);
    }

    // Overload < (less than)
    bool operator<(const Point &other) const {
        if (x < other.x) return true;
        if (x == other.x && y < other.y) return true;
        return false;
    }

    // Overload <= (less than or equal to)
    bool operator<=(const Point &other) const {
        return (*this < other || *this == other);
    }

    // Overload > (greater than)
    bool operator>(const Point &other) const {
        return !(*this <= other);
    }

    // Overload >= (greater than or equal to)
    bool operator>=(const Point &other) const {
        return !(*this < other);
    }

    // Function to display the coordinates
    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Point p1(3, 4), p2(3, 5);

    cout << "Point 1: ";
    p1.display();
    cout << "\nPoint 2: ";
    p2.display();
    cout << endl;

    // Comparing two points
    if (p1 == p2) {
        cout << "Points are equal.\n";
    } else if (p1 < p2) {
        cout << "Point 1 is less than Point 2.\n";
    } else if (p1 > p2) {
        cout << "Point 1 is greater than Point 2.\n";
    }

    return 0;
}