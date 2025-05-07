#include <iostream>
using namespace std;

int fibo(int n) {
    if(n==0) cout << "Enter the correct value of n bro!";
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main() {
    // your code here
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th fibonnacci number is: " << fibo(n);
    return 0;
}