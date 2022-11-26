#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    double result = x;
    for (int i=1;i<=n;i++) {
        result = x / (i + result);
    }
    printf("%.2f\n", result);
    return 0;
}