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
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int secondLargest=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>secondLargest && arr[j]<max){
            secondLargest=arr[j];
        }
    }
    cout<<"Second largest element: "<<secondLargest;
 return 0;
}