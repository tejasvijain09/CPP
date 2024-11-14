#include<iostream>
using namespace std;
int main()
{
   int n;
//  int flag =0;
 cout<<"Enter the number of elements in the array: ";
 cin >> n;
 int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element: ";
    cin>>arr[i];
} 
cout<<"Unsorted Array.";
for(int l =0;l<n;l++){
    cout<<arr[l]<<" ";
}
for(int j=0;j<n-1;j++){
    for(int k=0;k<n-1-j;k++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<"Sorted Array.";
for(int m =0;m<n;m++){
    cout<<arr[m]<<" ";
}
 return 0;
}