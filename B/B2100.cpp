#include <iostream>
#include <cstdio>

using namespace std;

int mat[20][20];

int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);

    for (int i=1;i<=n;i++) {
        printf("(%d,%d) ", x, i);
    }
    printf("\n");

    for (int i=1;i<=n;i++) {
        printf("(%d,%d) ", i, y);
    }
    printf("\n");

    for (int i=1;i<=n;i++) {
        if (i+(y-x) >= 1 && i+(y-x) <= n) {
            printf("(%d,%d) ", i, i+(y-x));
        }
    }
    printf("\n");

    for (int i=1;i<=n;i++) {
        if (x+y-i >= 1 && x+y-i <= n) {
            printf("(%d,%d) ", x+y-i, i);
        }
    }
    printf("\n");

    return 0;
}