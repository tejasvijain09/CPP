#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for(int i=1;i<11;i++){
        int result = num * i;
        cout<<num<<" * "<<i<<" = "<<result<<endl;
    }
 return 0;
}