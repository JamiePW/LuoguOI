#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x, y, a, b;
    scanf("%lf%lf%lf%lf", &x, &a, &y, &b);
    double result = (double)(b*y - a*x) / (b - a);
    printf("%.2lf\n", result);
    return 0;
}