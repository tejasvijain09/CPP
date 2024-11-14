#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream obj("name.txt"); // opening file using ifstream constructor
    if(!obj){
        cout << "Error opening file using constructor."<<endl;
        return 1;
    } 
    string line;
    while(getline(obj,line)){
        cout<<line<<endl;
    }
    obj.close(); // closing file
 return 0;
}