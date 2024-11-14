#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int i, n, pos, element, found = 0;
 
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]"<<"= ";
        cin>>arr[i];
    }
 
    cout<<"Enter the value of the element to be deleted: "<<endl;;
    cin>>element;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }
if (found == 1)
    {
        for (i = pos; i <  n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
            // n-=1;
        cout<<"The array after deleting the element is: "<<endl;
        for (i = 0; i < n - 1; i++)
        {
            cout<<arr[i];
        }
 
    }
    else
    cout<<"Element "<<element<<" is not found in the array"<<endl;
    return 0;
}
