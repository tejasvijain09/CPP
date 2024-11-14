#include<iostream>
using namespace std;
int main()
{
 int n,i;
 bool flag = false;
 cout<<"Enter the number of elements in the array: ";
 cin >> n;
 int arr[n];
for(i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element: ";
    cin>>arr[i];
}
int num;
cout<<"Enter the element to be searched: ";
cin>>num;
for(int j=0;j<n;j++){
    if(arr[j]==num){
        cout<<num<<" found at index "<<j;
        flag=true;
        break;
    }
}
if(flag==false){
    cout<<"Element not found in the array.";
}
// if(j == n) {
//         cout << "Element not found in the array." << endl;
//     }
 return 0;
}