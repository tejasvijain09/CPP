#include<iostream>
using namespace std;
void printDetails(string name, int age = 18, string country = "USA")
{
cout << "Name: " << name << ", Age: " << age << ", Country: " << country << endl;
}
int main()
{
printDetails("Alice");
printDetails("Bob", 25);
printDetails("Charlie", 30, "UK");
return 0;
}

void func(int a = 5, int b);
// Incorrect! b cannot follow a default parameter.