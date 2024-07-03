#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;  // dereference * astriks
int main() {
  /*  int var=18, *point;    //  *pointer bu bowqa variable ni manzilini korsatadi
    point=&var;
    cout<<var<<" "<<point<<" "<<*point<<endl;
     //point=&var varni xotira manziliga teng
     //*point esa yana var ga qaytadi va sonni ozini ko'rsatadi */
   int x=3, *p;
   p=&x;
   x+=4; // x=x+4 3+4=7
   x=*p+4; //  7=x=p  x=7+4=11 x=p  bolgani un ornilarini bemalol almshtira olamiz
    *p+=4; // *p=*p+4 p=11 11+4=15
    cout<<*p<<" "<<x<<endl;
}
