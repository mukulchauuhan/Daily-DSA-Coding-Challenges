#include<iostream>

using namespace std;

int raiseToPow(int base, int exponent) {
    if(exponent == 0) return 1;
    if(base == 0) return 0;
    return base * raiseToPow(base, --exponent);
}

int main() {
    int base;
    int exponent;
    cout << "Enter the base value: ";
    cin >> base;
    cout << "Enter the exponent value: ";
    cin >> exponent;

    cout << "The answer is : " << raiseToPow(base, exponent);
}