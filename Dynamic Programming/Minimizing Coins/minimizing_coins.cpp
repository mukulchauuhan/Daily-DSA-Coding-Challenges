#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<int> coins;
vector<int> dp(1000006, -2); // -2 because there is a base case to return -1; so it will clash otherwise.

int ftd(int x) {
    if(x==0) return 0; // no need -> this is the min step to get desired sum as 0;
    if(dp[x] != -2) return dp[x];

    int result = INT_MAX;

    for(int i=0; i < coins.size(); i++) {
        if(x-coins[i] < 0) continue;
        result = min(result, ftd(x-coins[i]));
    }
    if(result == INT_MAX) return dp[x] = INT_MAX;
    return dp[x] = 1 + result;
}

int fbu(int x) {
    vector<int> dp(x+1, INT_MAX); // local dp to avoid polluting global dp
    dp[0] = 0;
    
    for(int i=1; i<= x; i++) {
        for(int j=0; j<coins.size(); j++) {
            if(i-coins[j] >= 0 && dp[i-coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }
    return dp[x];
}

int main() {
    int n, x; // n -> number of coins, x -> desired sum of money
    cin >> n >> x;

    for(int i=0; i < n; ++i) {
        int num; 
        cin >> num;
        coins.push_back(num);
    }

    // int ans = ftd(x);
    int ans = fbu(x);
    if(ans == INT_MAX) cout << "-1\n";
    else cout << ans << "\n";
    return 0;
}