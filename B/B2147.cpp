#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    double result = sqrt(1+x);
    for (int i=2;i<=n;i++) {
        result = sqrt(i + result);
    }
    printf("%.2f\n", result);
    return 0;
}