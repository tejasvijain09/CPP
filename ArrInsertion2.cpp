#include<iostream>
using namespace std;

int main() {
    int n, num;

    // Enter the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n + 1];  // Array size increased by 1 to accommodate the new element

    // Input the original array elements
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Input the number to be inserted
    cout << "Enter the number to insert at the end: ";
    cin >> num;

    // Insert the new number at the end
    arr[n] = num;

    // Print the updated array
    cout << "Updated array: ";
    for(int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
