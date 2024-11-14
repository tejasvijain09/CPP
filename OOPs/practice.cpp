#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int xval =0, int yval=0): x(xval),y(yval) {}
    
    friend istream& operator>>(istream& in, Point& P);
    friend ostream& operator<<(ostream& out, Point& P); 
};
istream& operator>>(istream& in, Point& P){
    cout<<"Enter X: ";
    in>>P.x;
    cout<<"Enter Y: ";
    in>>P.y;
    return in;
}
ostream& operator<<(ostream& out, Point& P){
    out<<"("<<P.x<<" , "<<P.y<<")";
}
int main()
{
    Point p;
    cin>>p;
    cout<<p;
 return 0;
}