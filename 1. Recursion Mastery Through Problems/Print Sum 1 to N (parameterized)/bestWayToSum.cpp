#include<iostream>
using namespace std;

int printSum(int n) {
    if(n==0) return 0; // base case
    return n + printSum(n-1); // not doing cout here -> just give back the value to master
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "The total sum from one to " << n << " is: " << printSum(n) << endl;
    
    return 0;
}
