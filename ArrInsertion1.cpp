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
    cout << "Enter the number to insert at the start: ";
    cin >> num;

    // Shift elements to the right to make space at the start
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number at the start
    arr[0] = num;

    // Print the updated array
    cout << "Updated array: ";
    for(int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
