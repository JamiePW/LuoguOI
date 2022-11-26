#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int arr[101][101];
int arr2[101][101];

int main() {
    int n, m;
    double tmp;
    scanf("%d %d", &n, &m);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (i != 0 && i != n-1 && j != 0 && j != m-1) {
                tmp = 1.0 * (arr[i][j] + arr[i][j-1] + arr[i][j+1] + arr[i-1][j] + arr[i+1][j]) / 5 + 0.5;
                arr2[i][j] = (int)floor(tmp); 
            } else {
                arr2[i][j] = arr[i][j];
            }
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}