#include<iostream>
using namespace std;
struct phone{
    int area_code;
    int exchange;
    int num;
}n1,n2;
int main()
{
n1.area_code= 212;
n1.exchange= 767;
n1.num=8900;
cout<<"Enter your area code, exchange and number: ";
cin>>n2.area_code;
cin>>n2.exchange;
cin>>n2.num;
cout<<"My number is "<<"("<<n1.area_code<<")"<<" "<<n1.exchange<<"-"<<n1.num<<endl;
cout<<"Your number is "<<"("<<n2.area_code<<")"<<" "<<n2.exchange<<"-"<<n2.num<<endl;
 return 0;
}