#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
       int current = arr[i];
       int j=i-1;
    while(current<arr[j] && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
    }
    
    for(int t=0;t<n;t++){
        cout<<arr[t]<<" ";
    }
 return 0;
}
