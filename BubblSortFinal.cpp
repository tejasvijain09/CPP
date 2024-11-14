#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    } 

    cout << "Unsorted Array: ";
    for(int l = 0; l < n; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    for(int j = 0; j < n-1; j++) {
        bool flag = false;  // Early exit condition
        for(int k = 0; k < n-1-j; k++) {
            if(arr[k] > arr[k+1]) {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                flag = true;
            }
        }
        if(!flag) {
            break;  // Array is already sorted
        }
    }

    cout << "Sorted Array: ";
    for(int m = 0; m < n; m++) {
        cout << arr[m] << " ";
    }

    return 0;
}
