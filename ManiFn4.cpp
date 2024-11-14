#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // Using setfill
// cout << setw(10) << setfill('*') << 42 << endl; // Output: "********42"
// Using alignment manipulators
cout << left << setw(10) << "Left" << "aligned" << endl; // Left-aligned text
cout << right << setw(10) << "Right" << "aligned" << endl; // Right-aligned text
 return 0;
}