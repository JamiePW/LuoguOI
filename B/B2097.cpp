#include <iostream>
#include <cstdio>

using namespace std;

int arr[200];

int main() {
    int n, tmp;
    int max = 1;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    tmp = 1;
    for (int i=1;i<n;i++) {
        if (arr[i] == arr[i-1]) {
            tmp++;
        } else {
            if (tmp > max) {
                max = tmp;
            }
            tmp = 1;
        }
    }
    if (tmp > max) {
        max = tmp;
    }
    printf("%d\n", max);
    return 0;
}