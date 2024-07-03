#include <iostream>
#include <cstdlib>
#include <string>
#include "myClass.h"
using namespace std;

int main(){
    MyClass b;
    b.setName("Gates");
    cout<<b.getName()<<endl;

    system ("pause");
    return 0;
}