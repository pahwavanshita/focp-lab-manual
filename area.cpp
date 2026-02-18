#include <iostream>
using namespace std;

// Function to find area of square
float areaSquare(float side) {
    return side * side;
}

// Function to find area of circle
float areaCircle(float radius) {
    return 3.14159 * radius * radius;
}

// Function to find area of rectangle
float areaRectangle(float length, float width) {
    return length * width;
}

int main() {
    float side, radius, length, width;

    // Input for square
    cout << "Enter side of square: ";
    cin >> side;

    // Input for circle
    cout << "Enter radius of circle: ";
    cin >> radius;

    // Input for rectangle
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    // Function calls
    cout << "Area of Square = " << areaSquare(side) << endl;
    cout << "Area of Circle = " << areaCircle(radius) << endl;
    cout << "Area of Rectangle = " << areaRectangle(length, width) << endl;

    return 0;
}
