#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        //  count++;
        num=num/10;
        count++;
    }
    cout<<"No. of digits is :"<<count;
 return 0;
}