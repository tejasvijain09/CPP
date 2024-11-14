#include<iostream>
using namespace std;
inline int add(int a, int b)
{
return a + b;
}
int main()
{
int x = 5, y = 10;
int result = add(x, y); // Function call is replaced by `x + y` during compilation
cout << "Sum: " << result << endl;
return 0;
}