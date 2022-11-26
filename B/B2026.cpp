#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double a, b;
    double c;
    int k;
    double r;
    scanf("%lf%lf", &a, &b);
    k = a / b;
    r = a - k*b;
    
    printf("%f\n", r);
    return 0;
}