#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    long long result = 1;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        result *= 2;
    }
    printf("%lld\n", result);
    return 0;
}