#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int MAXN = 1000020;
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
        if (i <= 1001) {
            for (int j=i*i;j<MAXN;j+=i) {
                judge[j] = false;
            }
        }
    }
    return;
}

int main() {
    _init_();
    int X, Y, temp;
    cin >> X >> Y;
    if (X > Y) {    //题目中没说X，Y谁大谁小！！！！
        swap(X, Y);
    }
    int count = 0;
    for (int i=X;i<=Y;i++) {
        if (judge[i] == true) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}