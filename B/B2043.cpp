#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    int flag[3] = {0};
    scanf("%d", &x);
    if (x % 3 == 0) {
        flag[0] = 1;
    }
    if (x % 5 == 0) {
        flag[1] = 1;
    }
    if (x % 7 == 0) {
        flag[2] = 1;
    }

    if (flag[0] + flag[1] + flag[2] == 3) {
        printf("3 5 7\n");
    } else if (flag[0] + flag[1] + flag[2] == 2 || flag[0] + flag[1] + flag[2] == 1) {
        if (flag[0] == 1) {
            printf("3 ");
        }
        if (flag[1] == 1) {
            printf("5 ");
        }
        if (flag[2] == 1) {
            printf("7 ");
        }
        printf("\n");
    }
    else {
        printf("n\n");
    }
    return 0;
}