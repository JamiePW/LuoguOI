#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, judge, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    judge = b*b - 4*a*c;

    if (judge < 0) {
        printf("No answer!\n");
    } else if (judge == 0) {
        x1 = -1 * b / (2*a);
        printf("x1=x2=%.5f\n", x1);
    } else {
        x1 = (-1*b + sqrt(judge)) / (2*a);
        x2 = (-1*b - sqrt(judge)) / (2*a);
        if (x1 < x2) {
            printf("x1=%.5f;x2=%.5f\n", x1, x2);
        } else {
            printf("x1=%.5f;x2=%.5f\n", x2, x1);
        }
        
    }
    return 0;
}