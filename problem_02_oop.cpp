#include<bits/stdc++.h>
using namespace std;
class Vehicle{
protected:
    int speed;

};
class Car: protected Vehicle{
public:
    void input() {
    cout<<"Enter initial speed: ";
    cin>>speed;
    }
    void Add() {
    int s;
    cout<<"Enter speed to increase: ";
    cin>>s;
    speed = speed+s;
    }
    void display() {
    cout<<speed<<endl;
    }
};
int main() {
    Car c;
    c.input();
    c.Add();
    c.display();

    return 0;
}