#include <iostream>

using namespace std;
// This is the multiplication function
double multiply(double a, double b) {
    return a * b;
}
// HI this is a change kdkd
double division (double a, double b){
    // this is a division function
    // lorem
}

int main() {
    double num1, num2;
    char operation;

    cout << "--- Simple C++ Calculator ---" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+ or -): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } 
    else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } 
    else {
        cout << "Error: Invalid operator. Please use + or -." << endl;
    }

    return 0;
}
