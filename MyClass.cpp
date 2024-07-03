#include <iostream>
#include <string>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(){  cout<<"Constructor"<<endl;}
MyClass:: ~MyClass(){  cout<<"Destructor"<<endl;}

         void MyClass::setName(string abd){    //   :: -> scope resolution operator
     name=abd;
 };
 string MyClass::getName(){
     return name;
 }
int main(){
    MyClass b;
    b.setName("Gates");
    cout<<b.getName()<<endl;

    system ("pause");
    return 0;
}