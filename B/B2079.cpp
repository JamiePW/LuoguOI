#include <iostream>
#include <cstdio>

int main() {
    int n;
    double E[20];
    E[0] = 1;
    double tmp = 1;
    for (int i=1;i<=15;i++) {
        tmp /= i;
        E[i] = E[i-1] + tmp;
    }
    scanf("%d", &n);
    printf("%.10f\n", E[n]);
    return 0;
}