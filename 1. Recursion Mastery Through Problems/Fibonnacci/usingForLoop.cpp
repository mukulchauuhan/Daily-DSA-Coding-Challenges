#include <iostream>
using namespace std;

int main() {
    // your code here
    int sum = 0; 
    int a=1, b=1;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(n==1 || n==2) cout << 1;
    for (int i = 2; i < n; i++) {
        sum = a+b;
        a=b;
        b=sum;
    }
    cout << sum;
    return 0;
}