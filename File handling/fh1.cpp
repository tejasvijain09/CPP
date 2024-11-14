#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
ifstream fin("abc.txt"); //// Opening file using ifstream constructor
if (!fin)
{ // Check if the file opened successfully
cerr << "Error opening file using constructor." << endl;
return 1;
}
string line;
while (getline(fin, line)) {
cout << line <<endl; } // To read from file and display to console screen
fin.close();
}
