#include<iostream>
using namespace std;
class triangle{
    public:
    int base;
    int height;
    void area(){
        cout<<"enter base and height of triangle: ";
        cin>>base>>height;
    }
    double area1(){
        return 0.5*base*height;
    }
};

int main(){
    triangle t1;
    t1.area();
    cout<<"area of triangle is: "<<t1.area1()<< endl;
    return 0;
}