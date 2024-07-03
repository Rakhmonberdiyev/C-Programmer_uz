#include <iostream>
#include <cstdlib> //Factorial
#include <ctime> //Recursion function
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    else return n*fact(n-1);
}
int main(){
    int k;
    cout<<"Kerakli sonni kiriting";
    cin>>k;
    cout<<fact(k)<<endl;
    return 0;
}




