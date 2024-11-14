#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main()
{
fstream file("abc.txt", ios::out);
cout<<"Enter a String : ";
string line;
getline(cin, line); // gets input from console  and writes to file 
if(!file)
{
cerr<<"Error opening the file "<<endl;
return 1;
}
file<<line<<endl;
file.close();
return 0;
}