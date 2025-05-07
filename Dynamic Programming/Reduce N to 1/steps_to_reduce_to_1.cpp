// You are given N. You can perform any of the following operations some number of times.
/*
   1. Reduce N to N-1
   2. If N is div by 2 -> make it N/2
   3. If N is div by 3 -> make it N/3
You have to return the minimun number of steps in which you can reduce N to 1.
*/

#include<iostream>
#include<vector>
#include <climits>  // Needed for INT_MAX
#define inf INT_MAX
using namespace std;

// int f(int n) {
//     // This is the recursive function of this problem 
//     if(n==1) return 0;
//     if(n==2 || n==3) return 1;

//     return 1 + min(
//         f(n - 1),
//         min((n % 2 == 0) ? f(n / 2) : inf, (n % 3 == 0) ? f(n / 3) : inf)
//     );
// }

vector<int> dp;

int ftd(int N) {
    if(N==1) return 0;
    if(N==2 || N==3) return 1;
    if(dp[N] != -1) return dp[N];
    return dp[N] = 1 + min(ftd(N-1), min((N%2==0) ? ftd(N/2) : inf, (N%3==0) ? ftd(N/3) : inf));
}

int fbu(int n) {
    dp.clear();
    dp.resize(n+1, -1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;

    for(int i=4; i <= n; i++) {
        dp[i] = 1 + min(dp[i-1], min((i%2==0) ? dp[i/2] : inf, (i%3==0) ? dp[i/3] : inf));
    }
    return dp[n];
}

int main() {
    // tc : o(n) sc: o(n) for both top down and bottom up :)
    dp.clear();
    dp.resize(1005, -1);
    int n;
    cin >> n;
    cout << ftd(n) <<" " << fbu(n) << "\n";
    return 0;
}