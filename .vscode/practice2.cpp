#include<iostream>
using namespace std;
class Myclass{
public:
    int x;
Myclass(){
    x = 0;
}
Myclass(int val){
    x = val;
}
Myclass(const Myclass &obj){
    x = obj.x;
}
};
int main()
{
    Myclass obj1; // calls default constructor
    Myclass obj2(10); // calls parametrized constructor
    Myclass obj3=obj2; // calls copy constructor
 return 0;
}