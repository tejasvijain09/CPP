#include <iostream>
using namespace std;
void modify(int &num)
{
num = num * 2; // This will modify the original variable
}
int main()
{
int x = 10;
cout << "Before modify: " << x << endl;
modify(x); // Pass x by reference
cout << "After modify: " << x << endl;
return 0;
}