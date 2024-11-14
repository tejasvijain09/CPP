#include <iostream>
using namespace std;

// Define a structure to represent a point on a 2D plane
struct Point {
    int x; // x coordinate
    int y; // y coordinate
};

int main() {
    // Declare three points
    Point p1, p2, p3;
    
    // Get user input for the first two points
    cout << "Enter coordinates for p1 (x y): ";
    cin >> p1.x >> p1.y;
    
    cout << "Enter coordinates for p2 (x y): ";
    cin >> p2.x >> p2.y;
    
    // Calculate the sum of p1 and p2
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    
    // Display the result
    cout << "Coordinates of p1 + p2 are: " << p3.x << ", " << p3.y << endl;

    return 0;
}
