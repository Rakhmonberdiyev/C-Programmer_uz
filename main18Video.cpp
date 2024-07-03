#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    rand();
    srand(time(0));
    cout<<time(0)<<endl;
   for(int  i=0; i<10; i++)
        cout<<i+1<<"-son"<<1+rand()%100<<endl;
}

