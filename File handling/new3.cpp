#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("xyz.txt", ios::out);
    if(!file){
        cout<<"Error opening file using fstream object."<<endl;
        return 1;
    }
    string line;
    cout<<"Enter a string: ";
    getline(cin, line);
    file<<line<<endl;
    file.close();
 return 0;
}