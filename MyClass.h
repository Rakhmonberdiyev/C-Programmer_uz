#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
    MyClass(); // constructor
    ~MyClass(); //Destructor


    void setName(string str);
    string getName();
private:
    string name;

};

