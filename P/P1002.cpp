#include <iostream>
#include <cstdio>

using namespace std;

long long matrix[30][30];
bool judge[30][30];
int fx[9] = {-2, -2, -1, -1, 1, 1, 2, 2, 0};
int fy[9] = {-1, 1, -2, 2, -2, 2, -1, 1, 0};

int main() {
    int n, m;  //B的坐标
    int x, y;  //马的坐标
    cin >> n >> m >> x >> y;

    n += 2; m += 2; x += 2; y += 2;
    //既是为了防止马的坐标越界，也是给出足够的缓冲区，避免在边界上出问题，类似的题目中也要留出“缓冲区”

    for (int i=0;i<9;i++) {
        judge[x+fx[i]][y+fy[i]] = 1;
    }


    matrix[2][1] = 1;

    for (int i=2;i<=n;i++) {
        for (int j=2;j<=m;j++) {
            if (judge[i][j] == 1) {
                matrix[i][j] = 0;
                continue;
            }
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
        }
    }

    /*for (int i=0;i<=n;i++) {
        for (int j=0;j<=m;j++) {
            printf("%lld ", matrix[i][j]);
        }
        printf("\n");
    }*/

    printf("%lld\n", matrix[n][m]);

    return 0;
}