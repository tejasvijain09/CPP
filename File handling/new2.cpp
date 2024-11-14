#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("xyz.txt", ios::out);
    if(!fout){
        cout<<"Error opening file using constructor."<<endl;
        return 1;
    }
    string line;
    cout<<"Enter a string: ";
    getline(cin, line);
    fout<<line<<endl;
    fout.close();
 return 0;
}