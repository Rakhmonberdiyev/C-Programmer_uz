#include <iostream>
using namespace std;
int main() {
    string domain;
    while (1) {
        cout << "Domain name:  ";
        getline(cin, domain);
        domain = "nslookup " + domain;
        cout << domain << endl;
        system(domain.c_str());
        system("pause");
        system("cls");
    }
    return 0;
}