#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c;
    int result = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i=0;i<=c;i++) {
        for (int j=0;j<=c;j++) {
            if (a*i + b*j == c) {
                result++;
            }
        }
    }
    printf("%d\n", result);
    return 0;
}