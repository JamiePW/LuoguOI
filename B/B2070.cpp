#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    double Sn = 0;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        if (i % 2 == 0) {
            Sn -= 1.0 / i;
        } else {
            Sn += 1.0 / i;
        }
    }
    printf("%.4f\n", Sn);
    return 0;
}