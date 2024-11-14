#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int xval=0, int yval =0): x(xval),y(yval) {}
    void display(){
        cout<<x<<" "<<y;
    }
    // Point operator+(Point &P){
    //     Point t;
    //     t.x = x+P.x;
    //     t.y = y + P.y;
    //     return t;
    // }

    friend  Point operator-(Point &a, Point &b);
};
Point operator-(Point &a, Point &b){
    Point t;
    t.x = a.x-b.x;
    t.y = a.y-b.y;
    return t;
}
int main()
{
    Point p1(7,9);
    Point p2(3,4);
    Point p3;
    p3 = p1 - p2;
    p3.display();
 return 0;
}