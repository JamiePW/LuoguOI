#include <iostream>
#include <cstdio>

using namespace std;

int matr[40][40];

int main() {
    int n, x, y;  //x和y记录上一个数字的位置
    cin >> n;  //n = 2k + 1
    matr[0][n/2] = 1;
    x = 0;
    y = n/2;
    for (int i=2;i<=n*n;i++) {
        if (x == 0 && y != n-1) {
            matr[n-1][y+1] = i;
            x = n-1;
            y = y+1;
        } else if (y == n-1 && x != 0) {
            matr[x-1][0] = i;
            x = x-1;
            y = 0;
        } else if (x == 0 && y == n-1) {
            matr[x+1][y] = i;
            x = x+1;
            //y = y;
        } else {
            if (matr[x-1][y+1] == 0) {
                matr[x-1][y+1] = i;
                x = x-1;
                y = y+1;
            } else {
                matr[x+1][y] = i;
                x = x+1;
                //y = y;
            }
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ", matr[i][j]);
        }
        printf("\n");
    }
    return 0;
}