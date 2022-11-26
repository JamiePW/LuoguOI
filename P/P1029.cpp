#include <iostream>
#include <cstdio>
#include <cmath>

/*
关键思路：对于符合条件的P和Q，必然有P*Q=x0*y0（最大公约数和最小公倍数的性质）
那么我们就不用遍历P和Q，而是遍历x0和y0的因子即可，这样可以节省很多时间
为了避免重复，只需遍历sqrt(n)之前的即可
*/

long long GCD(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a%b);
    }
}

int main() {
    long long x0, y0, tmp;
    int result = 0;
    int flag = 0;
    scanf("%lld%lld", &x0, &y0);
    for (int i=1;i<=sqrt(x0*y0);i++) {
        if ((x0*y0) % i == 0 && GCD(i, (x0*y0)/i) == x0) {
            result += 1;
            if (i*i == x0*y0) { //注意特殊情况，有可能是完全平方数
                flag = 1;
            }
        }
    }
    result = 2*result - flag;
    printf("%d\n", result);
    return 0;
}