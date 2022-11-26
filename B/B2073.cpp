#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    for (int i=0;i<n;i++) {
        a %= b;
        a *= 10;
    }
    a /= b;
    printf("%d\n", a);
    return 0;
}