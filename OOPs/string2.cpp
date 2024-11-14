#include <iostream>
#include <string>
#include <cctype>  // For islower() and isupper()
using namespace std;

int main() {
    string str1, str2;

    // Asking for input of two strings
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    // 1. Checking if the strings are equal
    if (str1 == str2)
        cout << "The strings are equal." << endl;
    else
        cout << "The strings are not equal." << endl;

    // 2. Lexicographical order
    if (str1 < str2)
        cout << str1 << " comes first in lexicographical order." << endl;
    else if (str1 > str2)
        cout << str2 << " comes first in lexicographical order." << endl;
    else
        cout << "Both strings are lexicographically equal." << endl;

    // 3. Length and length difference
    int len1 = str1.length();
    int len2 = str2.length();
    cout << "Length of first string: " << len1 << endl;
    cout << "Length of second string: " << len2 << endl;
    cout << "Difference in length: " << abs(len1 - len2) << endl;

    // 4. Checking for lowercase letters in the first string
    bool hasLowerCase = false;
    for (char ch : str1) {
        if (islower(ch)) {
            hasLowerCase = true;
            break;
        }
    }
    if (hasLowerCase)
        cout << "The first string has lowercase letters." << endl;
    else
        cout << "The first string has no lowercase letters." << endl;

    // 5. Checking for uppercase letters in the first string
    bool hasUpperCase = false;
    for (char ch : str1) {
        if (isupper(ch)) {
            hasUpperCase = true;
            break;
        }
    }
    if (hasUpperCase)
        cout << "The first string has uppercase letters." << endl;
    else
        cout << "The first string has no uppercase letters." << endl;

    // 6. Concatenating both strings with a space
    string concatenatedString = str1 + " " + str2;
    cout << "Concatenated string: " << concatenatedString << endl;

    // 7. Removing spaces from the concatenated string
    string withoutSpaces = "";
    for (char ch : concatenatedString) {
        if (ch != ' ') {
            withoutSpaces += ch;
        }
    }
    cout << "String without spaces: " << withoutSpaces << endl;

    return 0;
}
