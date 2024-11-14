#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fin;
    fin.open("xyz.txt", ios::in);
    if(!fin){
        cout<<"Error opening file using fstream object."<<endl;
        return 1;
    }
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
 return 0;
}