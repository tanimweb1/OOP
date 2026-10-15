#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public:
string brand;
int speed;

void show(){

    cout<<"Brand Name : "<<brand<<endl;
    cout<<"Speed : "<<speed<<endl;
}

};

class Car:public Vehicle{
public:
string model;

void show1(){
    cout<<"Car Model : "<<model<<endl;
}

};

int main(){
Car a;
cin>>a.brand>>a.speed>>a.model;

a.show();
a.show1();




    return 0;
}