#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("abc.txt", ios::out);
    cout<<"Enter a string";
    string line;
    getline(cin, line);
    if(!file)
 return 0;
}