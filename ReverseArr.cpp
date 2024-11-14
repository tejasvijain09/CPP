#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[n-1-i];
    }
    cout<<"Reversed Array: ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
 return 0;
}