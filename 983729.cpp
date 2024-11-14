#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements one by one."<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    int low = 0; int high = n-1; int mid; int num;
    cout<<"Enter the number to be searched in the array: ";
    cin>>num;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==num){
            cout<<"Element found at "<<mid+1<<" position.";
            break;
        }else if(arr[mid]<num){
                low = mid+1;
        }else{
            high = mid-1;
        }
    }
    if(low>high){
        cout<<"Number not found";
    }
 return 0;
}