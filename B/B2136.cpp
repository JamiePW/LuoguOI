#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int MAXN = 10001;
bool judge[MAXN];
vector<int> prime;

int reverse(int x) {
    int result = 0;
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

void _init_() {
    judge[0] = false;
    judge[1] = false;
    for (int i=2;i<MAXN;i++) {
        judge[i] = true;
    }

    for (int i=2;i<MAXN;i++) {
        if (judge[i] == false) {
            continue;
        }
        prime.push_back(i);
        if (i <= 100) {
            for (int j=i*i;j<MAXN;j+=i) {
                judge[j] = false;
            }
        }
    }
    return;
}

int main() {
    _init_();
    int n;
    int count = 0;
    cin >> n;
    for (int i=0;i<prime.size();i++) {
        if (prime[i] > n) {
            break;
        }
        if (prime[i] <= n && prime[i] >= 11 && prime[i] == reverse(prime[i])) {
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}