#include <iostream>
#include <cmath>

#include <windows.h>
 using namespace std;

int main() {
   // FreeConsole();  //Console hiding
    int i=1;
    while(i<=5) { // if tru qilsak  va FreeConsole ni yoqsak u cheksiz ketadi va bizga korinmaydi
        system("explorer C:\\");
        Sleep(1000);
        system("explorer D:\\");
        Sleep(2000);
        i++;
    }
    system("pause");
    return 0;
}
 /* while(true){
      BlockInput(true) komputerga kiruvchi qurilmalarni iwlawni toxtatadi
  }
*/