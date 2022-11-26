#include <iostream>
#include <cstdio>

using namespace std;

long long candy[100001];

//本题的“贪心”之处在于，对于一个分组中的两个盒子，尽可能吃后一个盒子里的糖，因为这样对后面的分组更有利
//第一个盒子需要特殊处理

int main() {
    int n;
    long long x, tmp;
    long long eat = 0;
    scanf("%d %lld", &n, &x);
    for(int i=0;i<n;i++) {
        scanf("%lld", &candy[i]);
    }

    if (candy[0] > x) {
        eat += candy[0] - x;
        candy[0] = x;
    }

    for (int i=1;i<n;i++) {
        if (candy[i] + candy[i-1] > x) {
            eat += candy[i] + candy[i-1] - x;
            candy[i] = x - candy[i-1]; //只要对第一个盒子先行单独处理，这里就不会出现负数
        }
    }

    printf("%lld\n", eat);
    return 0;
}