#include <iostream>
#include <cstdio>

using namespace std;

long long H(long long n, long long x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2*x;
    } else {
        return (2*x*H(n-1, x) - 2*(n-1)*H(n-2, x));
    }
}

int main() {
    long long n, x;
    cin >> n >> x;
    cout << H(n, x) << endl;
    return 0;
}