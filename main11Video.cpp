#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
    // Takrorlash operatori: WHILE
    /* while(shart){
     harakat
    } */
  /*  int main() {
        {
            int n = 0;
            while (n <= 10) {
                cout << n << endl; // dastlab o chiqadi keyin 1 qoshiladi
                n++; // bu amal while ni ichida bo'lganligi bois u yana bosh qismiga qaytadi
            }
            //   cout<<n;  agar buni ishga tushursak 11 hosil boladi chunki oxirgi 10 ga 1 ni qo'shgan ammo 10 dan kotta bolganligi un while ni ichida output qilmagan
//n=11 bu yerda
        }
        int i=1;
        int a;
        srand(time(NULL)); // bu har daim har xil son chiqarishini taminlaydi
        while(i<=5){
            a=rand()%100+1; // bu yerda ixtiyoriy sonni 100 ga boladi va qoldiq ni oladi va bu albatta 100 dan kichik boladi
            cout<<a<<endl;
            i++;
        }


}*/
      /* int main(){
        int y=1, x;
        srand(time(NULL));
        while(y<=5) {
            x = rand() % 100 + 1;
            cout << x << endl;
            y++;
        }
      return 0;
    }  */
int main(){
    int  x, a=-1;
    srand(time(NULL));
    x = rand() % 100 + 1;
    while(a !=x) {
       cout<<"O'ylangan sonni kiriting\n";
       cin>>a;
       if(a>x)
        cout <<"O'ylangan sondan katta sonni kiritingiz" << endl;
        else if (a<x)
            cout<<"O'ylangan sondan kichik son kiritdingiz"<<endl;}
        if(a=x) cout<<"xursand bo'l NIGGA san yutding";

    }

