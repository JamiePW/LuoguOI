#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double len;
    double bTime, wTime;
    scanf("%lf", &len);
    bTime = len / 3.0 + 23 + 27;
    wTime = len / 1.2;

    if (bTime < wTime) {
        printf("Bike\n");
    } else if (bTime > wTime) {
        printf("Walk\n");
    } else {
        printf("All\n");
    }
    return 0;
}