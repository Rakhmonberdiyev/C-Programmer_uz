#include <iostream>
#include <cmath>

using namespace std;
int main() {
    /*  if(shart){
   harakat
            }*/
    int n, m;
    nishon:
    cin >> n;
    cin >> m;
    if (n > m)
        cout << "hammasi yaxshi" << endl;
    else if (n == m) {
        cout << "ular teng bolib qoldi"<<"\n";
        cout << "qaytadan urining"<<"\n";
    } else {
        cout << "qaytadan uruning"<<"\n";// or cout << (n>m) << endl;
        goto nishon;
    }
}