#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
    // Funksiyalar
    // n ta son ichida min va max
  int main() {
        int min, max, n, number;
        cout<<" Raqamlar sonini kiriting  ";
        cout << "n=";
        cin >> n; // raqamlar soni [5]
        cout << "1-son";
        cin >> number;
        min = number; // bu hollatta birinchi kiritilgan son min va max rolini oynedi
        max = number;

        for (int i = 0; i < n-1; i++) {  // agar n-1 qilmasak yuqorida 1-sonni kiritganimiz un oxirida n+1 ta son hosil boladi
            cout << i + 2 << "-son  "; // i 0 dan bowlangani un yuqorida birinchi qiymat bor wuni un bizga 2 qiymat kera va u n+2
            cin >> number;
            if (number < min)
                min = number;
            else if (number > max)
                max = number;
        }
        cout<<"Min:"<<min<<endl;
        cout<<"Max: "<<max<<endl;
    }