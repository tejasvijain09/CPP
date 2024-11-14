#include <iostream>
using namespace std;
union Data
{
int intValue;
float floatValue;
char charValue;
};
int main()
{
Data data;
data.intValue = 42;
cout << "intValue: " << data.intValue << endl;
data.floatValue = 3.14f; // Store a float value (overwrites intValue)
cout << "floatValue: " << data.floatValue << endl;
data.charValue = 'A'; // Store a char value (overwrites floatValue)
cout << "charValue: " << data.charValue << endl;
// Note: Only the last assigned value is valid;
//the previous values are overwritten.
cout << "intValue after charValue assignment: " << data.intValue << endl;
// This may give unexpected results
return 0;
}