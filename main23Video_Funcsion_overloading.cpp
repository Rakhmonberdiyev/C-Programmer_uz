#include <iostream>
#include <cstdlib>
#include <ctime> //Funcsion  overloading
using namespace std;
    void printnumber(int n){
        cout<<"int "<<n<<endl;}
        void printnumber(float n) {
            cout <<"float " <<n << endl;
        }

int main(){
        int k=4;
        float b=10.2;
    printnumber(k);
    printnumber(b); // bu 10 sonini ko'rsatadi chunki void faqqqat integerli funksiya
}


