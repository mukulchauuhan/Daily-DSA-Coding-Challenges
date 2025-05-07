#include <iostream> 

using namespace std;

int fact(int num) {
    if(num == 1 || num == 0) return 1; // base
    return num * fact(num-1);
}

int main() {
    int n;
    cout << "Enter number to find factorial of: ";
    cin >> n;

    cout << fact(n) << endl;
}