#include<bits/stdc++.h>
using namespace std;
class student{
public: 
int id;
int marks;
student(){
    id=0;
    marks =0;
}
student(int x){
    id  = x;
    marks = 0;
}
student(int a,int b){
id = a;
marks  = b;
}
void display(){
    cout<<"ID is = "<<id<<endl;
    cout<<"marks is = "<<marks<<endl;
}
};
int main(){
student a,b(10),c(20,30);
a.display();
b.display();
c.display();





    return 0;
}


// 

#include<bits/stdc++.h>
using namespace std;
class area{
public: 
int result;
area(int a){
    result = a*a;
}
area(int x,int y){
    result = x*y;
}
area(double c){
result = 3.1417*c*c;
}
void display(){
    cout<<"Result is = "<<result<<endl;
   // cout<<"marks is = "<<marks<<endl;
}
};
int main(){
area a(10),b(10,10),c(10.0);
a.display();
b.display();
c.display();





    return 0;
}

// another

#include<bits/stdc++.h>
using namespace std;
class Calculator{
public: 
int result;
Calculator(){
    result = 0;
}
Calculator(int x){
    result = x;
}
Calculator(int a,int b){
result = a+b;
}
void display(){
    cout<<"Result is = "<<result<<endl;
   // cout<<"marks is = "<<marks<<endl;
}
};
int main(){
Calculator a,b(10),c(10,20);
a.display();
b.display();
c.display();





    return 0;
}
