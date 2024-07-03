#include <iostream>
#include <cstdlib>
#include <ctime> //Fibonacci series
using namespace std;
// Public, Private, Protected
// Abstraction  Bu jarayonni foydalanuvchi biliwi kerak bolmagan consepsiya
 class Bankaccount{
     int balance=3;
 public: // Bu degani classdan ham tashqarida foydalana olamiz

  int myBalance() {
      return  balance*500;
     }
 };
 int main(){
     Bankaccount k;  //obyekt
     cout<<k.myBalance()<<endl;
     // Misol un biz COUT malumotni chiqarib beriwini bilamiz
     // ammo u buning un qqanday amallarni  bajaryotganini bilmaymiz manu wu ABSTRACTION

 }