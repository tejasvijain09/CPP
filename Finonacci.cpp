#include<iostream>
using namespace std;
int fibonacci(int num){
    if(num==1){
        return 0;
    }else if(num==2){
        return 1;
    }else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}
int main()
{
int num;
cout<<"Enter the number of terms: ";
cin>>num;
int result = fibonacci(num);
cout<<result;
 return 0;
}