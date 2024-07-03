#include <iostream>
#include <cstdlib>
#include <string>  // CONSTRUCTOR
using namespace std;
 class myClass{
 private:
     string name;
 public:
     myClass(string wee){   // ->CONSTRUCTOR
       //   cout<<"working..     \n";
         setName(wee); // CONS parametr koriniwida
     };
     void setName(string s){
         name=s;
     }
     string getName(){
         return name;

     }

};
 int main(){
     myClass ob("Karim");
     myClass ob1("Nozim");
     myClass ob2("Akrom");
     cout<<ob2.getName()<<endl;
     cout<<ob1.getName()<<endl;
     return 0;
 }