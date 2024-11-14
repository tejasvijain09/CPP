#include<iostream>
using namespace std;
int add(int a, int b)
{
return a + b;
}
int subtract(int a, int b)
{
return a - b;
}
int multiply(int a, int b)
{
return a * b;
}
// Function that takes a function pointer as a parameter
void performOperation(int (*operation)(int, int), int x, int y)
{
cout << "Result: " << operation(x, y);
}
int main()
{
// Declare function pointers
int (*opPtr)(int, int);
// Assign and use the function pointer
opPtr = &add;
cout << "Using function pointer for addition: " << opPtr(10, 5);
opPtr = &subtract;
cout << "Using function pointer for subtraction: " << opPtr(10, 5);
opPtr = &multiply;
cout << "Using function pointer for multiplication: " << opPtr(10, 5);
// Using function pointer as a callback
performOperation(&add, 20, 10);
performOperation(&subtract, 20, 10);
performOperation(&multiply, 20, 10);
 return 0;
}