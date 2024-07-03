#include <iostream>
#include <cstdlib>
#include <ctime> //Fibonacci series
using namespace std;

int fib(int n){
    if (n<=0) return 0;
    if(n<=2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
   /*  int main(){
    int k;
    cout<<"Kerakli sonni kiriting  ";
    cin>>k;
    cout<<fib(k)<<endl;
    return 0;
}   */
   int main(){
       int n;
       cout<<"n= ";
       cin>>n;
       for(int i=1; i <=n; i++) {
           cout<<fib(i)<<" ";}
           system ("pause");
           return 0;

   }




