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
}

int main() {
    int L;
    _init_();
    cin >> L;
    int sum = 0;
    int count = 0;
    int i = 0;
    while (true) {
        if (sum + prime[i] > L) {
            break;
        } else {
            sum += prime[i];
            cout << prime[i] << endl;
            count += 1;
            i += 1;
        }
    }
    cout << count << endl;
    return 0;
}