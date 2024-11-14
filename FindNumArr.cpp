// linear search
#include<iostream>
using namespace std;
int main()
{
    int n,searchElement, index =-1;
    cout << "Enter the number of elements in the array: ";
    cin>>n;
    int numbers[n];
    cout << "Enter " << n << " integers: " << endl;
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    cout << "Enter the number to find its index: ";
    cin >> searchElement;
    for(int i=0;i<n;i++){
        if(numbers[i] == searchElement){
            index=i;
            break;
        }                    // position = index + 1 
    }
    if(index != -1){
        cout << "Number " << searchElement << " found at index " << index << "." <<endl;
    }else{
        cout << "Number " << searchElement << "not found in the array." << endl;
    }
 return 0;
}