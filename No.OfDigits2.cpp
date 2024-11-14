#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0){
        num= -(num);
    }
     if(num==0){
        cout<<"1";
    }
    else{
    while(num>0){
        // num/=10;
        count++;
        num/=10;
    }
    cout<<"No. of digits: "<<count;
    }
 return 0;
}