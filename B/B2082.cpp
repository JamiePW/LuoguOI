#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int L, R;
    int result = 0;
    scanf("%d%d", &L, &R);
    for (int i=L;i<=R;i++) {
        int tmp = i;
        while (tmp != 0) {
            if (tmp % 10 == 2) {
                result++;
            }
            tmp /= 10;
        }
    }
    printf("%d\n", result);
    return 0;
}