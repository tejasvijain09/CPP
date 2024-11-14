#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num/2*2==num){
        cout << num << " is even.";
    }else{
        cout << num << " is odd.";
    }
 return 0;
}