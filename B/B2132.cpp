#include <iostream>
#include <cstdio>
#include <vector>

const int MAXN = 10001;

bool isPrime[MAXN];
std::vector<int> prime;

void _init_() {
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i=2;i<MAXN;i++) {
        isPrime[i] = true;
    }

    for (int i=2;i<MAXN;i++) {
        if (isPrime[i] == false) {
            continue;
        }
        prime.push_back(i);
        if (i <= 100) {
            for (int j=i*i;j<MAXN;j+=i) {
                isPrime[j] = false;
            }
        }
    }
    return;
}

int main() {
    _init_();
    int n;
    int count = 0;
    std::cin >> n;
    for (int i=1;i<prime.size();i++) {
        if (prime[i] > n) {
            break;
        }
        if (prime[i] - prime[i-1] == 2) {
            printf("%d %d\n", prime[i-1], prime[i]);
            count += 1;
        }
    }
    if (count == 0) {
        printf("empty\n");
    }
    return 0;
}