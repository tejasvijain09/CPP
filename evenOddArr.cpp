#include<iostream>
using namespace std;
int main()
{
    int n,evenCount=0,oddCount=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        evenCount++;
    }else{
        oddCount++;
    }
}
cout<<"Number of even elements: "<<evenCount<<endl;;
cout<<"Number of odd elements: "<<oddCount;
 return 0;
}