#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n, man;
    double result = 0;
    double x, y, distance;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%lf %lf %d", &x, &y, &man);
        distance = sqrt(x*x + y*y);
        result += 2 * distance / 50 + man * (1 + 0.5);
    }
    printf("%d\n", (int)ceil(result));
    return 0;
}