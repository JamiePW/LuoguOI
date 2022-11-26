#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    int Asum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        int temp = i;
        int len = 0;
        int sum1 = 0;
        while (temp != 0) {
            if (temp % 2 == 1) {
                sum1 += 1;
            }
            len += 1;
            temp /= 2;
        }
        //printf("%d: len=%d sum1=%d\n", i, len, sum1);
        if (sum1 > (len - sum1)) {
            Asum += 1;
        }
    }
    printf("%d %d\n", Asum, n-Asum);
    return 0;
}