#include<iostream>
using namespace std;
int main()
{
     long long int a = 0, b = 1 , n,c;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    if(n==1){
        cout<<a;
    }else if (n==2)
    {
        cout<<a<<" "<<b;
    }else if (n>2)
    {
        cout<<a<<" "<<b<<" ";
        for(int i=0;i<n-2;i++){
        c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    }
    
    
 return 0;
}