#include <iostream>
#include <cstdlib>
#include <ctime> //Fibonacci series
using namespace std;
void funcsion(int *var){
    *var=70;  // manzilga 70 ni joyledi
}
int main(){
    int x=10;
    funcsion(&x); // xni manzili tepaga chiqadi
    cout<<x<<endl; // finally x ni manzilida 70 paydo bo'ladi
    system("pause");
    return 0;
}