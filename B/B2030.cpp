#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    double xa, xb, ya, yb;
    scanf("%lf%lf%lf%lf", &xa, &ya, &xb, &yb);
    double result = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
    printf("%.3f\n", result);
    return 0;
}