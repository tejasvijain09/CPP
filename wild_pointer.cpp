#include<iostream>
using namespace std;
int main()
{
    int* ptr; // Uninitialized pointer, hence wild 
    *ptr = 10;   // Dangerous, as ptr points to an arbitrary memory location
 return 0;
}