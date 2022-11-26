#include <iostream>
#include <cstdio>

using namespace std;

int fastpow (int a, int n) {
    int result = 1;
    while (n != 0) {
        if (n % 2 == 1) {
            result *= a;
        }
        a = a*a;
        n /= 2;
    }
    return result;
}

int main() {
    int a, n;
    scanf("%d%d", &a, &n);
    printf("%d\n", fastpow(a, n));
    return 0;
}