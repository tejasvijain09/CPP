#include<iostream>
using namespace std;
class BankAccount{
int accountNumber;
int balance;
public:
BankAccount(int accNo,int bal ){
    accountNumber = accNo;
    balance = bal;
}
friend class Manager;
};
class Manager{
public:
 void viewAccountDetails(BankAccount & acc){
     cout<<"Account Number: "<<acc.accountNumber<<endl;
     cout<<"Balance: "<<acc.balance<<endl;
 }
};
int main()
{
    Manager m;
    BankAccount acc(12345, 10000);
    m.viewAccountDetails(acc);
 return 0;
}