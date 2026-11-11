#include<bits/stdc++.h>
using namespace std;
class Student{
int ID;
int marks;
public:
Student(int a,int b){
    ID = a;
    marks = b;
}
void display(){
    cout<<"ID id "<<ID<<endl;
cout<<"Marks is "<<marks<<endl;

}

};

int main(){
Student a(98,65);
a.display();





    return 0;
}

// another 
#include<bits/stdc++.h>
using namespace std;
class Employee{
int ID;
int salary;
int bonus;
public:
Employee(int a,int b,int c){
    ID = a;
    salary = b;
    bonus = c;
}
int totalSalary(){
    return salary+bonus;
}
void display(){
    cout<<"Total salary is = "<<totalSalary()<<endl;

}

};

int main(){
Employee a(98,65000,10000);

a.display();





    return 0;
}
