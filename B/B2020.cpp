#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int candy[5];
    scanf("%d%d%d%d%d", &candy[0], &candy[1], &candy[2], &candy[3], &candy[4]);
    int eat = 0; //吃掉的糖果

    for (int i=0;i<5;i++) {
        int tmp = candy[i] / 3;
        eat += candy[i] % 3;
        candy[i] = tmp;
        candy[(i+1)%5] += tmp;
        candy[(i-1+5)%5] += tmp;
    }

    printf("%d %d %d %d %d\n", candy[0], candy[1], candy[2], candy[3], candy[4]);
    printf("%d\n", eat);
    return 0;
}