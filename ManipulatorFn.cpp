#include<iostream>
#include <iomanip>    // Required for manipulators like setw, setprecision
using namespace std;
int main()
{
    // Using endl
cout << "Hello, World!" << endl; // Inserts a newline
// Using setw
cout<<setw(10)<<"ID"<<setw(20)<<"Name"<<setw(10)<<"Score"<<endl;
cout<<setw(10)<<"1"<<setw(20)<<"Harsh"<<setw(10)<<"95"<<endl;
cout<<setw(10)<<"2"<<setw(20)<<"Sahil"<<setw(10)<<"65"<<endl;
// Using setprecision
double pi = 3.141592653589793;
cout << "Pi with different precisions:" << endl;
cout<<setprecision(2)<<pi<<endl;     // Pi with 2 significant digits
cout<<setprecision(4)<<pi<<endl;     // Pi with 4 significant digits
cout<<fixed<<setprecision(3)<<pi<<endl;     // Fixed-point notation with 3 decimal places
cout<<setw(10)<<setfill('*')<<42<<endl;     // Output: "********42"
cout<<left<<setw(10)<<"Lift"<<"Aligned"<<endl;    // Left-aligned text
cout<<right<<setw(10)<<"Right"<<"Aligned"<<endl;    // Right-aligned text
// Using hex, dec, oct
int number = 255;
cout << "Decimal: " << dec << number << endl;
cout << "Hexadecimal: " << hex << number << endl;
cout << "Octal: " << oct << number << endl;
 return 0;
}