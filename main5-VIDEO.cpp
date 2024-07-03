#include <iostream>
#include <cmath>

using namespace std;
int main(){

double a, b;
cin>>a;
cin>>b;
cout<<"FLOOR  "<<floor(a)<<endl;  // eng yaqin butun kichik son
    cout<<"FLOOR "<<floor(b)<<endl;
    cout<<"CEIL  "<<ceil(a)<<endl; // eng yaqin butun katta son
    cout<<"CEIL  "<<ceil(b)<<endl;
    cout<<"TRUNC  "<<trunc(a)<<endl; // butun qismi kasrsiz
    cout<<"TRUNC  "<<trunc(b)<<endl;
    cout<<"ROUND  "<<round(a)<<endl; // yaxlitlash
    cout<<"ROUND  "<<round(b)<<endl;
}
