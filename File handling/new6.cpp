#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream infile("xyz.txt");
    infile.seekg(5,ios::beg);
    char data[20];
    infile.read(data,5);
    data[10] = '\0';
    cout<<"Data read: "<<data<<endl;
    infile.close();
    return 0;
}