#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    int result = 1;
    scanf("%d%d", &a, &b);
    if (a % 7 == 0) {
        printf("Sunday\n");
    } else {
        b %= 6;
        for (int i=0;i<b;i++) {
            result *= a;
            result %= 7;
        }
        if (result == 0) {
            printf("Sunday\n");
        } else if (result == 1) {
            printf("Monday\n");
        } else if (result == 2) {
            printf("Tuesday\n");
        } else if (result == 3) {
            printf("Wednesday\n");
        } else if (result == 4) {
            printf("Thursday\n");
        } else if (result == 5) {
            printf("Friday\n");
        } else if (result == 6) {
            printf("Saturday\n");
        }
    }
    return 0;
}