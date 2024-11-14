#include<iostream>
#include <fstream>
using namespace std;
int main()
{
   fstream file("name.txt",ios::out);
   cout<<"Enter a string ";
   string line;
   getline(cin,line);
   if(!file)
    {
     cout<<"Error opening file."<<endl;
     return 1;
   } 
   file<<line<<endl;
   file.close();

 return 0;
}