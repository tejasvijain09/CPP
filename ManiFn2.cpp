#include<iostream>
using namespace std;
#include <iomanip> // Required for manipulators like setw, setprecision
int main()
{
    // Using setprecision
double pi = 3.141592653589793;
cout << "Pi with different precisions:" << endl;
cout << setprecision(2) << pi << endl; // Pi with 2 significant digits
cout << setprecision(5) << pi << endl; // Pi with 5 significant digits
cout << fixed << setprecision(5) << pi << endl; // Fixed-point notation with 5 decimal places
 return 0;
}