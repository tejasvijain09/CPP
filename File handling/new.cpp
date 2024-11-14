#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("xyz.txt");
    if(!fin){
        cout<<"Error opening file using constructor."<<endl;
        return 1;
    }
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close(); // closing file
 return 0;
}