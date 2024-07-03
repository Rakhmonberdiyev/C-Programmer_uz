#include <iostream>
#include <cmath>
 using namespace std;
 // Pre & Post increament/decreament
int main() {
     int a;
    cin>>a; //a=5
     cout << a++ << endl; //Birinchi (a) chiqadi keyin 1 qowiadi [POST INCREAMENT]
  // now a=6
    // a++; // now a=7
     cout <<a<<endl;
     cout<<++a<<endl;  // Birinchi a ga 1 ni qoshadi keyin output chiqadi [PRE INKREAMENT]
       cout<<a--<<endl; // Oldin a ni chiqaradi keyin ayiradi
     cout <<a<<endl;
     cout<<--a<<endl; // birinchi a dan 1 ni ayiradi keyin a output boladi
     cout <<a<<endl;
     {
         int n = 6, y = 12;
         n*=y; //n=n*y
         cout<<n<<endl;
         // Now n=72
         n-=y; // bu holatda n=n-y [n=72-12] boladi
         cout<<n<<endl;
        // Now n=60, y=12
        y+=(n*2);//Bu holatda y=y+(n*2) [y=12+(60*2)]
        cout<<y;
     }
 }