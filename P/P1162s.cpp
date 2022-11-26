#include <iostream>
#include <cstdio>

using namespace std;

int matr[32][32];
int judge[32][32];
int n;

//基本思路：我们给矩形区域外围扩一圈，这样所有不涂色的块就相当于连接在一起了，那么就只需使用DFS找出这些块，其余的就是需要涂色的

void DFS(int x, int y) {
    if (x < 0 || x > n+1 || y < 0 || y > n+1 || judge[x][y] != 0) return;  //如果超范围或者是墙（2）或者已经被搜索过（1）就跳过
    judge[x][y] = 1; //代表不是墙，且不需要染色
    DFS(x-1, y); DFS(x+1, y); DFS(x, y-1); DFS(x, y+1);  //向四个方向递归搜索
}

int main() {
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cin >> matr[i][j];
            if (matr[i][j] == 0) {
                judge[i][j] = 0;  //代表不是墙
            } else {
                judge[i][j] = 2;  //代表是墙
            }
        }
    }
    DFS(0, 0);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (judge[i][j] == 0) {
                printf("2 ");
            } else {
                printf("%d ", matr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}