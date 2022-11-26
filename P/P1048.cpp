#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 1001;

int dp[MAXN][MAXN];
int w[MAXN];
int v[MAXN];

int main() {
    int T, M;
    scanf("%d%d", &T, &M);
    for (int i=1;i<=M;i++) { //从1开始，与LCS一样，注意边界条件
        scanf("%d%d", &w[i], &v[i]);
    }

    for (int i=0;i<=M;i++) {
        for (int j=0;j<=T;j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                if (j - w[i] >= 0) {
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }

    /*for (int i=0;i<=M;i++) {
        for (int j=0;j<=T;j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }*/

    cout << dp[M][T] << endl;

    return 0;
}