#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    int accountNumber;
    int balance;
public:
BankAccount(){
 accountNumber = 5001;
balance = 10000;



}
void display(){
    cout<<accountNumber<<endl;
    cout<<balance<<endl;

}

};

int main(){

BankAccount a,b,c;
a.display();
b.display();
c.display();

    return 0;
}