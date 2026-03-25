#include<iostream>
using namespace std;
class base{
    public:
    base(int x){
        cout<<"base class parameterized constructor:" << x<< endl;
    }
};
class derived:public base{
    public:
    derived(int x):base(x){
        cout<<"derived class constructor:" << x<< endl;
    }
};
int main(){
    derived d(10);
    return 0;
}