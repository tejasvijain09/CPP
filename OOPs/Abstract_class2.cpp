#include<iostream>
using namespace std;

class RBI {
protected:
    float ir;  // Interest rate
public:
    virtual float annualrate() = 0;  // Pure virtual function
    virtual ~RBI(){}
};

class HDFC : public RBI {
public:
    HDFC(float r) {  // Constructor takes float to accept interest rate
        ir = r;
    }
    float annualrate() {  // Implementing annual rate calculation
        return ir * 100;
    }
    ~HDFC(){}
};

class SBI : public RBI {
public:
    SBI(float r) {  // Constructor takes float to accept interest rate
        ir = r;
    }
    float annualrate() {  // Implementing annual rate calculation
        return ir * 100;
    }
    ~SBI(){}
};

int main() {
    // Create pointers to RBI and assign them to derived class objects
    RBI* bank1 = new HDFC(9.5);
    RBI* bank2 = new SBI(9.0);

    // Output the annual rate for each bank
    cout << "HDFC Annual Rate: " << bank1->annualrate() << endl;
    cout << "SBI Annual Rate: " << bank2->annualrate() << endl;

    // Clean up dynamically allocated memory
    delete bank1;
    delete bank2;

    return 0;
}
