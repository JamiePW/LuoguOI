#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    char c;
    int fee = 8;
    scanf("%d %c", &x, &c);
    if (c == 'y') {
        fee += 5;
    }

    if (x > 1000) {
        if ((x-1000) % 500 == 0) {
            fee += 4 * ((x-1000) / 500);
        } else {
            fee += 4 * ((x-1000) / 500 + 1);
        }
    }

    printf("%d\n", fee);
    return 0;
}