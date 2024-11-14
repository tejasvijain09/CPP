#include<iostream>
using namespace std;
class MyClass{
    public: 
    int x;
    // declaration of non-inline member function
    void setX(int val);
    int getX();
};
// definition of non-inline member functions
void MyClass::setX(int val){
    x = val;
}
int Myclass::getX(){
    return x;
}
int main()
{
 return 0;
}