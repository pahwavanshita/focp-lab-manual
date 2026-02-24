#include <iostream>
using namespace std;

class ArrayTraversal {
public:
int arr[5];
void input() {
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
}
void display() {
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};
int main() {
    ArrayTraversal obj;
    obj.input();
    obj.display();
    return 0;
}