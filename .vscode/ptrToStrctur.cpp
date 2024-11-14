#include<iostream>
using namespace std;
struct Point{
    int x,y;
};
int main()
{
    //Point p1 = {10,20};
    Point p1;
    p1.x=10;
    p1.y=20;
    Point* ptr = &p1;
    cout<< ptr->x; // Accessing structure member using pointer 
    // ptr->x is equivalent to (*ptr).x
 return 0;
}