#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number: ";
    cin>> num;
    cout << "Factors of " << num << " are: ";
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            cout << i <<endl;
        }
    }
 return 0;
}