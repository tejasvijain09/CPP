#include<iostream>
using namespace std;
class Point{
    private:
    int x, y;
    public:
    Point( int xVal = 0, int yVal = 0): x(xVal), y(yVal) {}
    friend Point operator+(const Point &p1, const Point &p2);
    void input(){
        cout<<"Enter x and y coordinates: ";
        cin>>x>>y;
    }
    void display() const{
        cout<< "Point: (" <<x<<", "<< y << ")" << endl;
    }
};
    Point operator+(const Point &p1, const Point &p2){
        return Point (p1.x + p2.x, p1.y + p2.y);
    }
int main()
{
    Point point1, point2, result;
    cout << "Enter first point:\n"; 
    point1.input();
    cout << "Enter second point:\n"; 
    point2.input();
    result = point1 + point2;
    cout<<"Sum of points: ";
    result.display();
 return 0;
}