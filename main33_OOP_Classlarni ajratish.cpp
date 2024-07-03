#include <iostream>
#include <cstdlib>
#include "MyClass.h"
using namespace std;

int main(){
    MyClass b;
    b.setName("Gates");
    cout<<b.getName()<<endl;

    system ("pause");
    return 0;
}