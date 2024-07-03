#include <iostream>
#include <string>
using namespace std;
class myClass {
public:
    myClass(); // constructor
    ~myClass(); //Destructor


    void setName(string str);
    string getName();
private:
    string name;

};

