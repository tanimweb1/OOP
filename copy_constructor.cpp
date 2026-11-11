#include<bits/stdc++.h>
using namespace std;
int main(){
class Student{
int id;
int marks;
public:
Student(int a,int b){
id= a;
marks = b;

}
Student(const Student&s){
    id = s.id;
    marks = s.marks;
}
void display(){
cout<<id<<endl<<marks<<endl;

}

};
Student a(98,65);
//a.display();
Student b(a);
b.display();




    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
class Student{


public:
int id;
int marks;

void display(){
cout<<id<<endl<<marks<<endl;

}

};
Student a;
a.id = 98;
a.marks = 87;

Student b=a;
b.display();




    return 0;
}
