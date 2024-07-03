#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
// Public, Private, Protected
// Incapsulation Malumotlarni yashirish
 class Bankaccount{
 private: // Bu degani classdan tawqarida malumotlar iwlamaydi
     int balance=1000; //$
     string passport="AC2694112"; //malumot bazasi
 public:
     void deposit(string pas_num, int sum ){
      if (pas_num==passport) balance+=sum;
 // Protected -> bunda malumotlar faqatgina amaldagi .CPP da iwlaydi holos
            // library dagi classlarda iwlamaydi
     }
     };
 int main(){
     Bankaccount k;
     k.deposit("AC2694112", 500);
   // cout<<k.balance<<endl;
    // k.balance=50000;
 //    cout<<k.balance<<endl;
 system("pause");
 return 0;

 }