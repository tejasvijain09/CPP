#include<iostream>
using namespace std;
int main()
{
    int * ptr = nullptr; // safe, ptr points to nothing
    if(ptr){
        // ptr is not null, safe to dereference
        cout<<"Hello";
    }else{
        cout<<"World";
    }
 return 0;
}