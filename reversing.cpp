#include <iostream>
#include <string>
using namespace std;

class ReverseString {
private:
    string str;

public:
    void input() {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    void reverse() {
        int n = str.length();

        for (int i = 0; i < n / 2; i++) {
            char temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }
    }

    void display() {
        cout << "Reversed string: " << str << endl;
    }
};

int main() {
    ReverseString obj;

    obj.input();
    obj.reverse();
    obj.display();

    return 0;
}
