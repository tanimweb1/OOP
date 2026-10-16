#include<bits/stdc++.h>
using namespace std;
class BankAccount{
protected:
    int balance;
public:
    int accountNumber;
};
class SavingsAccount:protected BankAccount{
public:
    void input() {
    cout<<"Enter account number: ";
    cin>>accountNumber;
    cout<<"Enter initial balance: ";
    cin>>balance;
    }
    void deposit() {
    int x;
    cout<<"Enter amount to deposit: ";
    cin>>x;
    balance= x+balance;
    }
    void display() {
     cout<<balance;
    }
};
int main() {
    SavingsAccount p;
    p.input();
    p.deposit();
    p.display();

    return 0;
}