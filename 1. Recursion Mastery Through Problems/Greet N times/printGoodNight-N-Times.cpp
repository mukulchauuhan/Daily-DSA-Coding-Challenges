#include<iostream>

using namespace std;

void greet(int N) {
    if(N==0) return;
    cout << "Good Night" << endl;
    greet(N-1);
}

int main() {
    int n;
    cin >> n;
    greet(n);
}