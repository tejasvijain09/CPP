#include<iostream>
using namespace std;
int main()
{
    void* ptr;
    int a = 10;
    ptr = &a;   // Valid, but can't be dereference without casting 
 return 0;
}