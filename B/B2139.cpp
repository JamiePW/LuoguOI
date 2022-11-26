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

int reverse(int x) {
    int result = 0;
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

int main() {
    _init_();
    int M, N;
    cin >> M >> N;
    int count = 0;
    for (int i=M;i<=N;i++) {
        if (judge[i] == true && judge[reverse(i)] == true) {
            if (count == 0) {
                printf("%d", i);
            } else {
                printf(",%d", i);
            }
            count += 1;
        }
    }
    if (count == 0) printf("No");
    printf("\n");
    return 0;
}