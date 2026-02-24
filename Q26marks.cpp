#include<iostream>
using namespace std;
int main(){
    float marks1,marks2,marks3,marks4,marks5;
    float total;
    float percentage;
    cout << "Enter the marks of first subject\n";
    cin >> marks1;
    cout << "Enter the marks of second  subject\n";
    cin >> marks2;;
    cout << "Enter the marks of third  subject\n"; 
    cin >> marks3;
    cout << "Enter the marks of fourth  subject\n";
    cin >> marks4;
    cout << "Enter the marks of fifth  subject\n";
    cin >> marks5;
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    cout << "total marks are\n" << total;    
    percentage = (total/500)*100;
    cout << "Percentage of the marks is:" << percentage;
    return 0; 
    }