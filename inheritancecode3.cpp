#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<< "base class default constructor called"<< endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<< "Derived class default constructor"<< endl;
    }
};
int main(){
    derived d;
    return 0;
}
