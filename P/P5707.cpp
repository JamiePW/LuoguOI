#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int s, v, H, M;
    int currentH = 8;
    int currentM = 0;
    cin >> s >> v;
    M = s/v + 10;
    if (s % v != 0) {
        M += 1;
    }
    H = M / 60;
    M = M % 60;
    
    currentH = (currentH - H + 24) % 24;
    currentM = currentM - M;
    if (currentM < 0) {
        currentM = (currentM + 60) % 60;
        currentH = (currentH - 1 + 24) % 24;
    }
    printf("%02d:%02d\n", currentH, currentM);
    return 0;
}