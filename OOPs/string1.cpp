#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    // Taking input for both strings
    cin >> str1 >> str2;

    // Checking if str2 is a substring of str1
    if (str1.find(str2) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
