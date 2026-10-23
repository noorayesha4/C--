#include <iostream>
using namespace std;

// Function to calculate the square of a number
void showSquare(int num) {
    cout << "Square: " << num * num << endl;
}

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num, a, b;

    // Square of a number
    cout << "Enter an integer to find its square: ";
    cin >> num;
    showSquare(num);

    // Addition of two numbers
    cout << "\nEnter two numbers for addition: ";
    cin >> a >> b;
    cout << "Sum: " << add(a, b) << endl;

    // Multiplication of two numbers
    cout << "\nEnter two numbers for multiplication: ";
    cin >> a >> b;
    cout << "Product: " << multiply(a, b) << endl;

    return 0;
}

