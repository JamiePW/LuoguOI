#include <iostream>
#include <cstdio>

using namespace std;

unsigned long long dp[5010];

int main() {
    dp[1] = 1;
    dp[2] = 2;
    int n;
    cin >> n;
    if (n <= 2) {
        cout << dp[n] << endl;
    } else {
        for (int i=3;i<=n;i++) {
            dp[i] = dp[i-2] + dp[i-1];
        }
        cout << dp[n] << endl;
    }
    return 0;
}