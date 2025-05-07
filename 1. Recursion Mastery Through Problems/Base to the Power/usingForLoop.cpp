#include<iostream>

using namespace std;

int main() {
    int base, exponent;
    cout << "Enter the base value: ";
    cin >> base;
    cout << "Now enter the exponent value: ";
    cin >> exponent;
    int ans = 1;
    for(int i=0; i<exponent; i++) {
        ans *= base;
    }
    cout << base <<" raise to the power " << exponent << " is: " <<ans;
}