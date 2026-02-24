#include<iostream>
using namespace std;
int main(){
    int arr[5] = {0};
    int sumeven = 0;
    int sumodd = 0;
    int num;
    for(int i = 0 ; i<5; i++){
        cout << "Enter a number #" <<" "<<  arr[i] << i+1;
        cin >> arr[i];
    if(arr[i] % 2 == 0){
        sumeven += arr[i];
    }
    else{
        sumodd += arr[i];
    }
}
    cout << "sum of all even numbers" << sumeven;
    cout << "sum of all odd numbers" << sumodd;
    
    return 0;
}