#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("xyz.txt");
    outfile.seekp(2,ios::beg);
    outfile<<"Jack";
    outfile.close();
 return 0;
}