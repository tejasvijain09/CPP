#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1("name.txt",ios::in);
    if(!file1){
        cerr<<"Error in opening the file"<<endl;
        return 1;
    }
    string line;
    while(getline(file1,line)){
        cout<<"Output from the file"<<endl;
        cout<<line<<endl;
    }
    file1.close();
 return 0;
}