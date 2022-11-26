#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double determ[2][2];
    determ[0][0] = x2 - x1;
    determ[0][1] = y2 - y1;
    determ[1][0] = x3 - x1;
    determ[1][1] = y3 - y1;
    double result = fabs((determ[0][0]*determ[1][1] - determ[1][0]*determ[0][1]) / 2);
    printf("%.2f\n", result);
    return 0;
}