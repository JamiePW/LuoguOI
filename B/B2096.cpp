#include <iostream>
#include <cstdio>

using namespace std;

int count[100009];

int main() {
    int n, tmp;
    int max = 0;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &tmp);
        if (tmp > max) {
            max = tmp;
        }
        count[tmp]++;
    }
    for (int i=0;i<=max;i++) {
        printf("%d\n", count[i]);
    }
    return 0;
}