#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
    // Takrorlash operatori: DO- WHILE
    /* while(shart){
     harakat
    } */
    int main() {
      /*     int n;
do{
    cout<<"N="; cin>>n;
}
while (n>=0); // Bunda agar n>=0 bolsa n chiqarishda davom et
cout<<"Xush kelibsz"<<endl; // bu aks holda xush kelibsz ni cheqar degan manoni anglatadi */
   float a, b; int op;
do { cout<<"a = "; cin>>a; cout<<"b = "; cin>>b;
    cout<<"1: Ayirish\n2: Ko'paytirish\n3:Bo'lish\n4: Chiqish"<<endl;
    cin>>op;
    switch(op){
        case 1: cout<<a<<"-"<<b<<"="<<a-b<<endl; break;
        case 2: cout<<a<<"*"<<b<<"="<<a*b<<endl; break;
        case 3: cout<<a<<"/"<<b<<"="<<a/b<<endl; break;
        case 4: break;
    }
} while (op!=4); // 4 chiqishni anglatadi

}
