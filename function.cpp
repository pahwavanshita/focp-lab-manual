#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    cout << "Provide 2 integers:" << endl;
    cin >> x >> y;
    int result = add(x, y); // Calling with user input
    cout << "Result: " << result << endl;
    return 0;
}
