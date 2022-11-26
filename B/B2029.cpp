#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int h, r;
    scanf("%d%d", &h, &r);
    int result = 20000 / (3.1415926 * r * r * h) + 1;
    printf("%d\n", result);
    return 0;
}