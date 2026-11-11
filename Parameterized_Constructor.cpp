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