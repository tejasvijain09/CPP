#include<iostream>
using namespace std;
class Myclass{
    public:
    int * ptr;
    MyClass(int val){
        ptr = new int(val);
    }
~MyClass(){
    delete ptr;
}
};
int main()
{
    Myclass obj(10); // calls constructor
    // deconstructor will be called automatically when obj goes out of scope
 return 0;
}