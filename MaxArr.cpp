#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin>>n;
    int numbers[n];
    cout << "Enter " << n << " integers: " << endl;
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    int maxElement = numbers[0];
    for(int i=1;i<n;i++){
        if(numbers[i]>maxElement){
            maxElement = numbers[i];
        }
    }
    cout << "The maximum element in the array is : " << maxElement << endl;
 return 0;
}