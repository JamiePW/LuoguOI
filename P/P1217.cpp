#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

const int MAXN = 10001;

bool judge[MAXN];
vector<int> sprime;
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
        if (i <= 100) {
            for (int j=i*i;j<MAXN;j+=i) {
                judge[j] = false;
            }
        }
    }
}

bool isPrime(int x) {
    int bound = (int) sqrt(x);
    for (int i=0;i<prime.size();i++) {  //只看素数，而不是逐个判断
        if (prime[i] > bound) {
            break;
        }
        if (x % prime[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b, tem;
    cin >> a >> b;
    _init_();  //先找出10000以内的质数
    //根据样例，直接将1位和2位的结果填入
    sprime.push_back(5);
    sprime.push_back(7);
    sprime.push_back(11);
    //从3位到8位循环判断回文数
    
    for (int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            tem = d1 * 100 + d2 * 10 + d1;
            if (isPrime(tem) == true) {
                sprime.push_back(tem);
            }
        }
    }

    for (int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            tem = d1 * 1000 + d2 * 100 + d2 * 10 + d1;
            if (isPrime(tem) == true) {
                sprime.push_back(tem);
            }
        }
    }

    for (int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0;d3<=9;d3++) {
                tem = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
                if (isPrime(tem) == true) {
                    sprime.push_back(tem);
                }
            }
        }
    }

    for (int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0;d3<=9;d3++) {
                tem = d1 * 100000 + d2 * 10000 + d3 * 1000 + d3 * 100 + d2 * 10 + d1;
                if (isPrime(tem) == true) {
                    sprime.push_back(tem);
                }
            }
        }
    }

    for (int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0;d3<=9;d3++) {
                for (int d4=0;d4<=9;d4++) {
                    tem = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if (isPrime(tem) == true) {
                        sprime.push_back(tem);
                    }
                }
            }
        }
    }

    for (int d1=1;d1<=9;d1+=2) {
        for (int d2=0;d2<=9;d2++) {
            for (int d3=0;d3<=9;d3++) {
                for (int d4=0;d4<=9;d4++) {
                    tem = d1 * 10000000 + d2 * 1000000 + d3 * 100000 + d4 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if (isPrime(tem) == true) {
                        sprime.push_back(tem);
                    }
                }
            }
        }
    }

    for (int i=0;i<sprime.size();i++) {
        if (sprime[i] > b) {
            break;
        }
        if (sprime[i] < a) {
            continue;
        }
        cout << sprime[i] << endl;
    }

    return 0;
}