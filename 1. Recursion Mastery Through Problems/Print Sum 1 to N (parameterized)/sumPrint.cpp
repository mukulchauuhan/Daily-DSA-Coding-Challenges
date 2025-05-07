#include<iostream>
using namespace std;

// static int sum = 0;

// int printSum(int i, int n) {
//     if(i>n) return 0;
//     sum+=i;
//     printSum(i+1, n);
//     return sum;
// }

// This is a more simpler approach :
void printSum(int sum, int n) {
    if(n==0) {
        cout << "Your sum from 1 to N is: " << sum;
        return;
    }
    printSum(sum+n, n-1);
}

int main() {
    int n;
    cout << "Enter a number to print its sum from 1 to N: ";
    cin >> n;
    printSum(0, n);
}