#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    double p[40];
    double q[40];
    double result[40];
    p[1] = 1;
    q[1] = 2;
    result[1] = 2;
    for (int i=2;i<=30;i++) {
        q[i] = p[i-1] + q[i-1];
        p[i] = q[i-1];
        result[i] = result[i-1] + q[i] / p[i];
    }

    scanf("%d", &n);
    printf("%.4f\n", result[n]);
    return 0;
}