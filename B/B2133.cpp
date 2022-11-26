#include <iostream>
#include <cstdio>

int main() {
    int n;
    std::cin >> n;
    for (int i=1;i<=100000;i++) {
        for (int j=1;j<=i;j++) {
            if (i * (i+1) / 2 - 3 * j == n) {
                printf("%d %d\n", j, i);
                return 0;
            }
        }
    }
    return 0;
}