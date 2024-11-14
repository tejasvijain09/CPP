#include<iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}

    // Friend function to overload >> operator (input)
    friend istream& operator>>(istream &in, Point &P);

    // Friend function to overload << operator (output)
    friend ostream& operator<<(ostream &out, const Point &P);
};

// Overloading the >> operator (input)
istream& operator>>(istream &in, Point &P) {
    cout << "Enter X: ";
    in >> P.x;
    cout << "Enter Y: ";
    in >> P.y;
    return in;
}

// Overloading the << operator (output)
ostream& operator<<(ostream &out, const Point &P) {
    out << "(" << P.x << " , " << P.y << ")";
    return out;
}

int main() {
    Point p3;
    
    // Input values using the overloaded >> operator
    cin >> p3;
    
    // Output values using the overloaded << operator
    cout << "Point is: " << p3 << endl;
    
    return 0;
}
