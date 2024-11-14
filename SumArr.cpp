#include<iostream>
using namespace std;
int main()
{
    int n,sumArr=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sumArr+=arr[i];
    }
    cout<<"Sum of array elements is: "<<sumArr;
 return 0;
}