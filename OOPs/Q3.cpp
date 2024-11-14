#include<iostream>
using namespace std;

class BankAcc { 
    int accNo, Bal; // Private members: account number and balance

public:
    // Constructor to initialize account number and balance
    BankAcc(int A, int B) {
        accNo = A;
        Bal = B;
    }

    // Friend function declaration allowing Manager to access private members
    friend void Manager::viewAccDetails(BankAcc &obj);
};

class Manager {
public:
    // Function to view account details of BankAcc
    void viewAccDetails(BankAcc &obj) {
        // Accessing private members of BankAcc
        cout << "Account Number: " << obj.accNo << endl;
        cout << "Balance: " << obj.Bal << endl;
    }
};

int main() {
    // Creating a BankAcc object
    BankAcc acc(123456, 5000); // Account number: 123456, Balance: 5000

    // Creating a Manager object
    Manager manager;

    // Manager accessing and displaying account details
    manager.viewAccDetails(acc);

    return 0;
}

#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    int balance;
    public:
    BankAccount(int accNo, int bal){
        accountNumber = accNo;
        balance = bal;
    }
    friend class Manager;
};
class Manager{
    public:
    void viewAccountDetails(BankAccount &acc){
        cout<<"Account Number: "<<acc.accountNumber<<endl;
        cout<<"Balance: "<<acc.balance<<endl;
    }
};
int main()
{
    Manager m;
    BankAccount b(1234,34000);
    m.viewAccountDetails(b);
 return 0;
}