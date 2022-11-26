#include <stdio.h>

int main () {
    double x;
    int n;
    double result = 1;
    scanf("%lf %d", &x, &n);
    for (int i=0;i<n;i++) {
        result *= x;
        result += 1;
    }
    printf("%.2f\n", result);
    return 0;
}