#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    long long feb[40];
    int n, x;
    feb[1] = 1;
    feb[2] = 1;
    for (int i=3;i<=30;i++) {
        feb[i] = feb[i-1] + feb[i-2];
    }
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &x);
        printf("%lld\n", feb[x]);
    }
    return 0;
}