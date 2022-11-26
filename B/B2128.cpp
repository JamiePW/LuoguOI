#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int MAXN = 50002;

bool judge[MAXN];
vector<int> prime;

void _init_() {
    for (int i=0;i<MAXN;i++) {
        judge[i] = true;
    }
    judge[0] = false;
    judge[1] = false;

    for (int i=2;i<MAXN;i++) {
        if (judge[i] == false) {
            continue;
        } else {
            prime.push_back(i);
            if (i <= 1000) {
                for (int j=i*i;j<MAXN;j+=i) {
                    judge[j] = false;
                }
            }
        }
        
    }
    return;
}

int main() {
    _init_();
    int n;
    cin >> n;
    int count = 0;
    for (int i=0;i<prime.size();i++) {
        if (prime[i] > n) {
            printf("%d\n", count);
            return 0;
        }
        count += 1;
    }
    printf("%d\n", count);
    return 0;
}