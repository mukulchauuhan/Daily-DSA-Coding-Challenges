#include<iostream>
using namespace std;

void print(int i, int n) {
    if(i>n) return; // base case
    cout << i << endl;
    print(i+1, n);
}

int main () {
    int n;
    cin >> n;
    cout << endl; // line gap to make it more clear
    print(1, n);
}