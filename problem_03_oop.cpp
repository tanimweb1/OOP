#include<bits/stdc++.h>
using namespace std;
class Product{
public:
    string productName;
protected:
    int price;
};
class DiscountedProduct: protected Product{
public:
    void calculateDiscount() {
    int disP = price*0.10;
    price = price-disP;
    }
    void input() {
    cout<<"Enter name: ";
    cin>>productName;
    cout<<"Enter price: ";
    cin>>price;
    }
    void display() {
    cout<<price<<endl;
    cout<<productName<<endl;
    }

};
int main() {
    DiscountedProduct c;
    c.input();
    c.calculateDiscount();
    c.display();

    return 0;
}