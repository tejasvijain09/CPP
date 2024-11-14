#include<iostream>
using namespace std;

class MyClass
{
public:
    int x;
    void setX(int x)
    {
        this->x = x; // this->x refers to the member variable, x refers to the parameter
    }
};

int main()
{
    MyClass obj;   // Create an instance of MyClass
    obj.setX(10);  // Set the member variable x to 10 using setX
    cout << obj.x; // Print the value of the member variable x
    return 0;
}
