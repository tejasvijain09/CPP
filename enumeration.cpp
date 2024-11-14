#include<iostream>
using namespace std;
enum Day {
Monday, // 0
Tuesday, // 1
Wednesday, // 2
Thursday, // 3
Friday, // 4
Saturday, // 5
Sunday // 6
};
int main()
{
    Day today = Wednesday; // Assign an enum value to a variable
if(today == Wednesday)
{
cout << "Today is Wednesday!" << endl;
}
cout << "Wednesday is day number: " << today << endl;
 return 0;
}