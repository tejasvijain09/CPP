#include<iostream>
using namespace std;
int nSum(int num){
    if(num==1){
        return 1;        
}
return num + nSum(num-1);
}
int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
int result = nSum(num);
cout<<"Sum "<<result;
 return 0;
}