#include <iostream>
#include <cstdio>

using namespace std;

int arr[5][5];
int Max[5];
int Min[5];

int main() {
    int max, min;
    int flag = 0;
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0;i<5;i++) {
        max = arr[i][0];
        for (int j=1;j<5;j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        Max[i] = max;

        min = arr[0][i];
        for (int j=1;j<5;j++) {
            if (arr[j][i] < min) {
                min = arr[j][i];
            }
        }
        Min[i] = min;
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (Max[i] == Min[j]) {
                flag = 1;
                printf("%d %d %d\n", i+1, j+1, Max[i]);
            }
        }
    }
    if (flag == 0) {
        printf("not found\n");
    }
    return 0;
}