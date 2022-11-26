#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x, y;
    char c;
    scanf("%d%d %c", &x, &y, &c);

    if (c == '+') {
        printf("%d\n", x+y);
    } else if (c == '-') {
        printf("%d\n", x-y);
    } else if (c == '*') {
        printf("%d\n", x*y);
    } else if (c == '/') {
        if (y == 0) {
            printf("Divided by zero!\n");
        } else {
            printf("%d\n", x/y);
        }
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}