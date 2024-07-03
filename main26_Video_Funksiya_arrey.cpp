#include <iostream>
#include <cstdlib>
#include <ctime> //Fibonacci series
using namespace std;
void printArray(int arr[], int size) {
    for (int i; i < size; i++) {
        cout<<++arr[i]<<endl;

    }
}
int main(){
    int my[3]={1, 3, 5};
    for(int i=0; i<3; i++){
        cout<<my[i]<<endl;
    }
    printArray(my, 3);
    system("pause");
    return 0;
}


