#include <iostream>
#include <cmath>

using namespace std;
int main(){
    bool a, b=5!=7, c=8==8, d=6==9;
    a= true;
            cout<<"(1) "<<!a<<endl;  // dast avval a=true [a=1] edi keyin inkor amalidan so'ng u o ga yani false ga aylandi

cout<<"(2) "<<b<<endl; // Bu true chunki 5 va 7 teng emas
cout<<"(3) "<<c<<endl;  // Bu ham true chumki 8 soni 8 ga teng
cout<<"(4) "<<!c<<endl; //Bu amal false chunki [!] teskari amal qoyilgan
cout<<"(5) "<<d<<endl; // Bu amal ham false chunki 6 soni 9 ga teng emas
  bool y=5<7, m, n;
  cout<<"(6) "<<y<<endl;  // Bu amal true chumki 5 soni 7 dan kichik
    //  [&&] va || amali
    cout<<(true && true)<<endl; //O'qituvchi keldi va dars bowlandi
    cout<<(true && false)<<endl;//O'qituvchi keldi va dars bowlanmadi
    cout<<(false && true)<<endl;//O'qituvchi kelmadi va dars bowlandi
    cout<<(false &&false)<<endl;//O'qituvchi kelmadi va dars bowlanmadi
    // [||] Yoki amali
    cout<<(true || true)<<endl;
    cout<<(true || false)<<endl;
    cout<<(false || true)<<endl;
    cout<<(false || false)<<endl;
}

