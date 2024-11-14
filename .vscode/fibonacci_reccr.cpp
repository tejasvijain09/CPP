#include <iostream>
using namespace std;

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // cout << "Fibonacci Series: ";
    // for (int i = 0; i < n; i++) {
    //     cout << fibonacci(i) << " ";
    // }
    cout<<"Nth fibonacci number: "<<endl;
    cout<<fibonacci(n);
    cout << endl;

    return 0;
}

