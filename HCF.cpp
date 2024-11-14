#include<iostream>
using namespace std;
int main() // using euclidean algorithm
{
    int num1,num2,rem;
    // int x;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
//  x = num1*num2;
    while(rem !=0 ){
         rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    cout << "GCD is: " << num1 << endl;
    // int y = num1;
    // int LCM=x/y;
    // cout<<"LCM is "<<LCM;
 return 0;
}