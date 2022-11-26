#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c;
    int flag[3] = {0};
    scanf("%d%d%d", &a, &b, &c);
    if (a < 60) {
        flag[0] = 1;
    }
    if (b < 60) {
        flag[1] = 1;
    }
    if (c < 60) {
        flag[2] = 1;
    }

    if (flag[0] + flag[1] + flag[2] == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}