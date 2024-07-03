#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Public, Private, Protected
 class person{
 public: // Bu degani classdan (person) ham tashqarida foydalana olamiz
  void sayHi() {    // funksiya behavier ni korsatadi
      cout<<" Say Hi";
  }
 };
 int main(){
     person mark, Habib;  // Bu lar obyektlar
     Habib.sayHi();
     mark.sayHi();
     return 0;
 }