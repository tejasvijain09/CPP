#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0){
        cout<<"Enter positive numbers only. ";
    }else{
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    }
 return 0;
}