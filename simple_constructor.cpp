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





// another

#include<bits/stdc++.h>
using namespace std;
class Student{
    int roll;
    int marks;
public:
Student(){
 roll = 10;
marks = 85;


    //cout<<"Cnstructor is called"<<endl;
}
void display(){
    cout<<"Roll is "<<roll<<endl;
    cout<<"Marks is "<<marks<<endl;

}

};

int main(){

Student a,b;
a.display();
b.display();

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
class Product{
    int productID;
    int price;
    int quantity;
    
public:
Product(){
 productID = 101;
price = 500;
quantity = 5;

}
int totalPrice(){
    return price*quantity;
}

void display(){
    cout<<"Total Price = "<<totalPrice()<<endl;
}

};

int main(){

Product a,b;
a.totalPrice();
b.totalPrice();
a.display();
b.display();


    return 0;
}
