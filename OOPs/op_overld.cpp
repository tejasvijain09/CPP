#include<iostream>
using namespace std;
class Point{
    private:
    int x,y;
    public:
    Point(int xval=0, int yval=0):x(xval), y(yval){}
    void display(){
        cout<<x<<" ";
        cout<<y;
    }
    // Point add (Point &other){
        // Point r;
        // r.x = x + other.x;
        // r.y = y + other.y;
        // return r;
        // return Point (x+other.x, y+other.y); // Ambigious Object 
    // }
    Point addobjects (Point &a, Point &b){
        Point r;
        r.x = a.x + b.x;
        r.y = a.y + b.y;
        return r;
    }
};
int main()
{
    Point p1(2,3);
    Point p2(3,4);
    Point p3;
    // p3 = p1.add(p2);
    // p3.display();
    p3 = p3.addobjects(p1,p2);
    p3.display();
 return 0;
}