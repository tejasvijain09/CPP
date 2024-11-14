#include<iostream>
using namespace std;
template<class T>
void swapp(T& a, T& b){
    T c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int x=10, y= 20;
    swapp(x,y);
 return 0;
}