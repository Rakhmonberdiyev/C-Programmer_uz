#include <iostream>
#include <cmath>

using namespace std;
int main() {
    // Shartsiz o'tissh operatori
        int n;
    nishon:
        cout<<"Musbat son kiriting.  n= ";
        cin>>n;
        if(n>0)
            cout<<"Qabul qilindi"<<endl;
      else {
            cout << "Qaytadan kiriting"<<endl;
            goto nishon; // Goto degani bu owa yozilgan[nishin]// sozdan yana bowla deganidir
        }

}