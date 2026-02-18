#include<iostream>
using namespace std;
int main(){
    float num1, num2, num3;
    cout<<"enter three marks:";
    cin>>num1>>num2>>num3;
    float average = (num1+num2+num3)/3.0;
    cout<<"the average of the three marks is:" << average <<endl;
    return 0;
}
