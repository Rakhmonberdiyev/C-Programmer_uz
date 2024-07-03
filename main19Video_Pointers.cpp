#include <iostream>
#include <cstdlib>
#include <ctime>   //Pointers || Ko'rsatkichlar
using namespace std; //ampersanda
int main() {
    int score, *pointer, score_2=9;  //  *variable  bu adress un o'zgaruvchidir
    cin>>score;
    pointer=&score; //bunda pointer SCOREni xotira manziliga teng bolayotgani un u variableda *pointer kabi yoziladi
    cout<<&score<<"  "<<score<<endl; // kiritilgan sonni xotira manzili va sonni ozi
    cout<<pointer<<endl; // xotira manzili  any veriable *score ga teng bola olmaydi (*pointer) boliwi kerak
    pointer=&score_2; // bu SCORE_2 variablesini xotira manzilini ifodalaydi
    cout<<pointer;
return 0;
}
