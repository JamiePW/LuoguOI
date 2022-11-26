#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int MAXN = 100001;
bool judge[MAXN];
vector<int> prime;

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
        if (i <= 400) {
            for (int j=i*i;j<MAXN;j+=i) {
                judge[j] = false;
            }
        }
    }
    return;
}

int main() {
    _init_();
    int m, n;
    cin >> m >> n;
    for (int i=m;i<=n;i++) {
        if (i != m) {
            printf(",");
        }
        int temp = 2;
        for (int j=0;prime[j] <= i;j++) {
            if (i % prime[j] == 0) {
                temp = prime[j];
            }
        }
        printf("%d", temp);
    }
    printf("\n");
    return 0;
}