#include <iostream>
 using namespace std;
 int main(){
     int n, num, d, reverse=0;
     num=n;
     cout<<"musbat son kiriting  \n"; cin>>n; //12321
     do{
d=num%10;  // 1 -> 2-> 3-> 2->1
reverse=(reverse*10)+d;  // 1->12 ->123 ->1232 ->12321
num=num/10;  //1232 ->123 ->12 ->1

     }while(num!=0);
     if(n==reverse) {cout<<"Bu raqam Palindrom";}
     else cout<<"Bu raqam palindome emas";
     return 0;
 }