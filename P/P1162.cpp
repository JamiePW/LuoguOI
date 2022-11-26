#include <iostream>
#include <cstdio>

using namespace std;

//这种解法仅适用于凸多边形，正确解法见P1162s

int matr[31][31];

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> matr[i][j];
        }
    }

    int f1, f2, f3, f4;
    for (int i=1;i<n-1;i++) {
        for (int j=1;j<n-1;j++) {  //符合要求的点一定不在边上
            if (matr[i][j] == 0) {
                f1 = 0; f2 = 0; f3 = 0; f4 = 0;
                for (int k=i-1;k>=0;k--) {
                    if (matr[k][j] == 1) {
                        f1 = 1;
                        break;
                    }
                }
                for (int k=i+1;k<n;k++) {
                    if (matr[k][j] == 1) {
                        f2 = 1;
                        break;
                    }
                }
                for (int k=j-1;k>=0;k--) {
                    if (matr[i][k] == 1) {
                        f3 = 1;
                        break;
                    }
                }
                for (int k=j+1;k<n;k++) {
                    if (matr[i][k] == 1) {
                        f4 = 1;
                        break;
                    }
                }
                if (f1 + f2 + f3 + f4 == 4) {
                    matr[i][j] = 2;
                }
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