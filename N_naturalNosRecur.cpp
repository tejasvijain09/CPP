#include<iostream>
using namespace std;
void nPrint(int num){
    if(num<=0){
        cout<<"Incorrect input entered.../";
    }
    while(num>0){
        cout<<num<<" ";
        num--;
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    nPrint(num);
 return 0;
}