#include<iostream>
using namespace std;
void update(){
    static int i=1;
     i++;
    cout<<i;
}
int main (){
    update();
    update();
    update();
    return 0;
}