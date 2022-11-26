#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int MAXN = 10001;
bool judge[MAXN];
vector<int> prime;

bool isPrime(int n) {
    int judge = (int)sqrt(n) + 1;
    for (int i=2;i<judge;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
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
    int S, temp, max;
    cin >> S;
    if (S % 2 != 0) {
        printf("%d\n", 2 * (S-2));
    } else {
        for (int i=0;i<prime.size();i++) { //不要把2落下，2也有可能在后续情况中出现！！！
            if (prime[i] > S/2) {
                break;
            }
            if (isPrime(S-prime[i]) == true) {
                max = prime[i] * (S - prime[i]);
            }
        }
        printf("%d\n", max);
    }
    return 0;
}