#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin>>n;
    int numbers[n];
    cout << "Enter " << n << "integers: " << endl;
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    int minElement = numbers[0];
    for(int i=1;i<n;i++){
        if(numbers[i]<minElement){
            minElement = numbers[i];
        }
    }
    cout << "The minimum element in the array is :" << minElement << endl;
 return 0;
}