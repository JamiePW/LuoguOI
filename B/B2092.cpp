#include <iostream>
#include <cstdio>

using namespace std;

bool light[5009]; //0代表关闭，1代表打开（已经经过了第一个人的操作）

int main() {
    int n;
    int result = 0;
    scanf("%d", &n);
    for (int i=2;i<=n;i++) {
        for (int j=i;j<=n;j+=i) {
            light[j] = light[j] ^ 1;
        }
    }
    for (int i=1;i<=n;i++) {
        if (light[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}