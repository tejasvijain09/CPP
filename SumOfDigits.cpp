#include<iostream>
using namespace std;
int main()
{
 int num,res,sum=0;
 cout<<"Enter a number: ";
 cin>>num;
 while(num>0){
res=num%10;
sum=sum+res;
num=num/10;
 }
 cout<<"Sum is:"<<sum<<endl;
 return 0;
}