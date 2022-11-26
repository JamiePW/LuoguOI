#include <iostream>
#include <cstdio>

using namespace std;

int fastpow (int a, int b) {
    int result = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            result *= a;
            result %= 1000;
        }
        a *= a;
        a %= 1000;
        b /= 2;
    }
    return result;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%03d\n", fastpow(a, b));
    return 0;
}