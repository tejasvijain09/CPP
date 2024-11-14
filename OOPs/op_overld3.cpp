#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int xval = 0, int yval =0): x(xval), y(yval) {}
    void display(){
        cout<<x<<" "<<y;
    }
    Point operator++(){
        Point t;
        t.x = ++x;
        t.y = ++y;
        return t;
    }
    Point operator++(int){
        Point t;
        t.x = x++;
        t.y = y++;
        return t;
    }
};
int main()
{
    Point p1(2,3);
    // ++p1;
    // p1++;
    // p1.display();
    Point temp = ++p1;  // Capture the old value of p1 in temp

    temp.display();  // Displays 2 3 (the old values before increment)
    cout<<endl;
    p1.display();    // Displays 3 4 (the new incremented values)

 return 0;
}