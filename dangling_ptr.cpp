#include<iostream>
using namespace std;
int main()
{
    int* ptr = new int(10);
    delete ptr;
    ptr = nullptr;  // After deleting a pointer, set it to nullptr to avoid accidental dereferencing 
 return 0;
}