#include<bits/stdc++.h>
using namespace std;

class Person{
public: 
string name;
int age;

void show(){
cout<<"Name is : "<<name<<endl;
cout<<"Age is : "<<age<<endl;

}
};

class Studet : public Person{
public: 
int StuID;

void display(){
    cout<<"Student ID is : "<<StuID<<endl;
}
};

int main(){


}