#include <iostream>
#include <cmath>

using namespace std;
int main() {
    // Takrorlash operatori
    int sum=0;
    for( int i=0; i<=10; i++)   {
       //cout<<i<<endl;
       cout<<sum<<"+"<<i<<"=";
// cout<<sum<<endl; agar bu amal wu yerdaa bajarilganda sum=sum+i amali bajarilmasdan eski sum chiqishi mumkin edi
        sum+=i; // sum=0+0=0 2)sum=o+1=1 3) sum=1+2=3 shu tarzda davom etadi
 cout<<sum<<endl;
    }
    cout<<sum<<endl;

}