//6.8
//洛谷P3383
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int MAXN = 100000000;

bool isPrime[MAXN];
vector<int> prime;

void _init_() {
    for (int i=0;i<MAXN;i++) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i=2;i<MAXN;i++) {
        if (isPrime[i] == false) {
            continue;
        }
        prime.push_back(i);
        if (i <= 10000) { //根据筛法，我们只需判断小于根号n的素因子
            for (int j=i*i;j<MAXN;j+=i) {
                isPrime[j] = false;
            }
        }    
    }

    /*for (int i=0;i<prime.size();i++) {
        printf("%d\n", prime[i]);
    }*/
    return;
}

int main() {
    _init_();
    int n, q, k;
    scanf("%d%d", &n, &q);
    for (int i=0;i<q;i++) {
        scanf("%d", &k);
        printf("%d\n", prime[k-1]);
    }
    return 0;
}