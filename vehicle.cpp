#include<iostream>
using namespace std;

class Vehicle{
public:
    string brand;
    int year;

    void display(string b, int y){
        cout << "The brand is " << b << " and its year is " << y << endl;
    }
};

class Car : public Vehicle{
private:
    string model;
    int seatingcapacity;

public:
    void setModel(string a, int c){
        model = a;
        seatingcapacity = c;
    }

    void output(){
        cout << "Model: " << model << endl;
        cout << "Seating Capacity: " << seatingcapacity << endl;
    }
};

int main(){
    Car c;

    c.display("Toyota",2001);
    c.setModel("Fortuner",7);
    c.output();

    return 0;
}