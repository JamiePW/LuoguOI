#include <iostream>
#include <cstdio>

using namespace std;

double f (double x) {
    if (x >= 0 && x < 5) {
        return (-1 * x + 2.5);
    } else if (x >= 5 && x < 10) {
        return (2 - 1.5 * (x-3) * (x-3));
    } else if (x >= 10 && x < 20) {
        return (x / 2 - 1.5);
    }
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%.3f\n", f(x));
    return 0;
}