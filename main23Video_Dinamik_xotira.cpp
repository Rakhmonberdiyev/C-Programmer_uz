#include <iostream>
#include <cstdlib>    //Size of
#include <ctime>
using namespace std;
int fact(int n){
    if (n==1) return 1;
    else return n*fact(n-1); //5*fact(4)
    // fact(4)=4*fact(3)
    // fact(3)=3*fact(2)
    // fact(2)=2*fact(1)
    // fact(1)=1

}
int main(){
    int k;
    cin>>k;
    cout<<fact(k)<<endl;
}

