#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
    // Funksiyalar

int min(int a, int b, int c) {
        if (a < b && a < c)
            return a;
        else if (b < a && b < c)
            return b;
        else return c;
    }

int max(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c && b > a)
        return b;
    else return c;
}
int main() {
    int n, m, p;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    cout << "p=";
    cin >> p;
    cout << "Min =" << min(n, m, p) << endl;
    cout << "Max =" << max(n, m, p) << endl;
}

