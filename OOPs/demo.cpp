#include<iostream>
using namespace std;

class Distance {
private:
    double km;  // Distance in kilometers

public:
    // Constructor to initialize kilometers using a value in meters
    Distance(double meters) {
        km = meters / 1000;  // Convert meters to kilometers
    }

    // Overloaded type conversion operator to convert kilometers to meters
    operator int() {
        return km * 1000;  // Convert kilometers to meters
    }

    // Function to display the distance in kilometers
    void displayInKm() const {
        cout << "Distance in kilometers: " << km << " km" << endl;
    }
};

int main() {
    double metersInput;
    double kmInput;

    // Input and conversion from meters to kilometers
    cout << "Enter distance in meters: ";
    cin >> metersInput;
    Distance distInKm(metersInput);  // Convert meters to kilometers
    distInKm.displayInKm();  // Display the distance in kilometers

    // Input and conversion from kilometers to meters
    cout << "Enter distance in kilometers: ";
    cin >> kmInput;
    Distance distInMeters(kmInput * 1000);  // Convert kilometers to meters
    int meters = distInMeters;  // Conversion from kilometers to meters
    cout << "Distance in meters: " << meters << " m" << endl;

    return 0;
}
