#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int temp;

    // Input
    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Sorting in descending order using nested loops
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {

            if(arr[i] < arr[j]) {
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output
    cout << "Largest number: " << arr[0] << endl;
    cout << "Second largest number: " << arr[1] << endl;

    return 0;
}
