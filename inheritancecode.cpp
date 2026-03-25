#include<iostream>
using namespace std;
 
class Base {
public:
    void display() {
        cout << "Base class function." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class function." << endl;
    }
};
int main() {
    Base b;
    Derived d;

    b.display(); // Calls Base class function
    d.display(); // Calls Derived class function

    return 0;
}