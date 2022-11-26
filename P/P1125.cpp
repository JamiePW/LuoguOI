#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int count[30];

bool isPrime(int x) {
    int bound = (int) sqrt(x);
    if (x == 0 || x == 1) { //特殊值处理
        return false;
    }
    for (int i=2;i<=bound;i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int maxn = 0;
    int minn = 100;
    char word[110];
    scanf("%s", word);
    for (int i=0;i<strlen(word);i++) {
        count[word[i] - 'a'] += 1;
    }

    for (int i=0;i<26;i++) {
        if (count[i] != 0) { //只统计出现过的字母
            if (count[i] > maxn) {
                maxn = count[i];
            }
            if (count[i] < minn) {
                minn = count[i];
            }
        }
        
    }

    if (isPrime(maxn - minn)) {
        printf("Lucky Word\n%d\n", maxn-minn);
    } else {
        printf("No Answer\n0\n");
    }
    return 0;
}