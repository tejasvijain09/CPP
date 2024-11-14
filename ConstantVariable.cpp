#include<iostream>
using namespace std;
#define z 30
int main()
{
    const int num = 10;
    constexpr int n = 20;
    // const int num;
    // num=20;
    cout<<z;
    cout<<"The entered number is: "<<num;
    cout<<n;
 return 0;
}
// const: Used to declare a read-only variable.
// constexpr: Used for compile-time constants.
// #define: A preprocessor directive that defines a constant value