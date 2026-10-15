#include<bits/stdc++.h>
using namespace std;
class Person{
public:
string name;
int age;

void show(){
    cout<<name<<" "<<age<<endl;
}

};

class Teacher: public Person{
public:
string sub;
void show1(){
  
    cout<<sub<<endl;
}
};
int main(){
Teacher a;


cin>>a.name>>a.sub>>a.age;

a.show();
a.show1();


}