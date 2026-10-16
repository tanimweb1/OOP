#include<bits/stdc++.h>
using namespace std;
class Parent{
protected:
    int x;
public:
    void setX() {
    cout<<"Enter x: ";
    cin>>x;
    }
};
class Child: protected Parent{
protected:
    int p;
public:
    void setP() {
    setX();
    cout<<"Enter p: ";
    cin>>p;
    }
    void smaller() {
    if(x<p)
        cout<<"Smaller: "<<x<<endl;
    else
        cout<<"Smaller: "<<p<<endl;
    }
};
int main() {
    Child c;
    c.setP();
    c.smaller();
    return 0;
}