#include <iostream>
using namespace std;
int main() {
    /*  if(shart){
   harakat
            }*/
    int n,m;
    cout<<"n=";
    cin>>n; cout<<endl;

    if (n == 1)
            cout << "Dushanba"<<"\n";
            else
        if (n == 2)
            cout << "Seshanba"<<"\n";
        else

        if (n == 3)
            cout << "Chorshanba"<<"\n";
        else

        if (n == 4)
            cout << "Payshanba"<<"\n";
        else

        if (n == 5)
            cout << "Juma"<<"\n";
        else

        if (n == 6)
            cout << "Shanba"<<"\n";
        else

        if (n == 7)
            cout << "Yakshanba"<<"\n";
        else
            cout<<" Bu hafta kuni emas"<<endl;
     // shart aperatori
    switch (n){
        case 1:
            cout<<"Dushanba"<<"\n";
        break;
        case 2:cout<<"Seshanba"<<"\n";
            break;
        case 3:cout<<"Chorshanba"<<"\n";
            break;
        case 4:cout<<"Payshanba"<<"\n";
            break;
        case 5:cout<<"Juma"<<"\n";
            break;
        case 6:cout<<"Shanba"<<"\n";
            break;
        case 7:cout<<"Yakshanba"<<"\n";
            break;
        default:
            cout<<"Bu hafta kuni emas"<<endl<<"\n";

    } // tanlash aperatori  HAFTA KUNLARI
    cout<<"m="; cin>>m;
    switch(m){
        case 1:
        case 2:
        case 12:
            cout<<"Bu qish fasli"<<endl<<"\n";
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Bu bahor fasli"<<"\n";
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Bu yoz fasli"<<"\n";
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Bu kuz fasli"<<"\n";
            break;
        default:
            cout<<"Bunday fasl mayjud emas"<<"\n";

    } // tanlash aperatori  OYLAR
    {
        n>5 ? cout<<"Bu son 5 dan katta": cout<<"Bu son 5 dan kichik";
    }
}