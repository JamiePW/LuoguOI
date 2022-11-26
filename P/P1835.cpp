#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int MAXN = 50001;

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

    return;
}

int main() {
    int L, R;
    int result = 0;
    _init_();
    scanf("%d %d", &L, &R);
    bool judge[R-L+1] = {0};
    for (int i=0;i<R-L+1;i++) {
        judge[i] = true;
    }

    if (L == 1) { //不要忘了1这个特殊的数！！！！
        judge[0] = false;
    }

    for (int i=0;i<prime.size();i++) {
        if (prime[i] > R) {
            break;
        }
        int tmp = prime[i] * (L / prime[i]);
        while (tmp < L) {
            tmp += prime[i];
        }
        while (tmp >= L && tmp <= R) {
            if (tmp / prime[i] > 1) { //避免把质数自己去掉
                judge[tmp-L] = false;
            }
            tmp += prime[i];
        }
    }
    for (int i=0;i<R-L+1;i++) {
        /*if (judge[i] == true) {
            result += 1;
        }*/
        result += judge[i];
    }
    printf("%d\n", result);
    return 0;
}