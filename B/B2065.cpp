#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    double x, y, a, b;
    scanf("%d %lf %lf", &n, &a, &b);
    x = b / a;
    for (int i=0;i<n-1;i++) {
        scanf("%lf%lf", &a, &b);
        y = b / a;
        if (x - y > 0.05) {
            printf("worse\n");
        } else if (y - x > 0.05) {
            printf("better\n");
        } else {
            printf("same\n");
        }
    }
    return 0;
}