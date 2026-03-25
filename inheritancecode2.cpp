#include<iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base class constructor: " << x << endl;
    }
};
class Derived : public Base {
public:
    Derived(int x, int y) : Base(x) {
        cout << "Derived class constructor: " << y << endl;
    }
};
int main() {
    Derived d(10, 20);
    return 0;
}