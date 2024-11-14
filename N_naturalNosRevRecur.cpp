#include<iostream>
using namespace std;
void nPrint(int num){
    if(num<=0){
        cout<<"Incorrect input entered.../";
    }
    int n=1;

    while(n<=num){
        cout<<n<<" ";
        n++;
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