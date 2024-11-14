#include<iostream>
using namespace std;
int main()
{
    int n,ele,pos;
 cout<<"Enter the number of elements in the array: ";
 cin >> n;
 int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element: ";
    cin>>arr[i];
} 
cout<<"Enter the new element to be inserted: ";
cin>>ele;
cout<<"Enter the position where the element is to be inserted: ";
cin>>pos;
n=n+1;
for(int j=n-1;j>=pos;j--){
    arr[j]=arr[j-1];
}
arr[pos-1]=ele;
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
 return 0;
}