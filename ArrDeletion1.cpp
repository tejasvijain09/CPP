#include<iostream>
using namespace std;
int main()
{
    int i, n, index, arr[10];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index of the element to be deleted: ";
    cin>>index;
    if (index >= n)  
    {  
        cout<<endl<<"Deletion is not possible in the array.";  
    }  
    else  
    {  
        for (i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];
            n-=1;
            cout<<"The array after deleting the element is: ";
        for (i = 0; i < n - 1; i++)
            cout<<arr[i];
        
    }
    return 0;
}
 