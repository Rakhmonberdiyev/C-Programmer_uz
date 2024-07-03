#include <iostream>
#include <cstdlib>
#include <ctime> //Dynamic memory
using namespace std;  // derifrence * astriks
int main() {
    int a; //static joy eggallash 4 byte
    // int *P=&a; // bu holatta *P a ni ip addresini ko'rsatadi
    int*P= new int;
    *P=5;
    delete P; // P ning xotira manzilini ochiradi ammo P ning ozi mavjud boladi

    int *p=NULL; // bu nol qiymatni anglatadi
            p=new int;
    *p=6;
    delete p; //dangling pointers
    p=new int;
    *p=7;
    // deleate [] p; massivni xotirasini o'chiradi
}