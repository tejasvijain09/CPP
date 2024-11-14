// range-based for loop(C++ 11 and later)
#include<iostream>
using namespace std;
int main()
{
    int numbers[]={1,2,3,4,5};
    for(int num : numbers){
        cout<<"Number:"<<num<<endl;
    }
 return 0;
}