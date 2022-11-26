//6.4 通用型进制转换
//洛谷P1143
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int ctoi(char c) {
    if (c >= '0' && c <= '9') {
        return (c - '0');
    } else if (c >= 'A' && c <= 'Z') {
        return (c - 'A' + 10);
    }
}

char itoc (int x) {
    if (x >= 0 && x <= 9) {
        return ('0' + x);
    } else if (x >= 10 && x <= 36) {
        return (x - 10 + 'A');
    }
}

int main () {
    int n, m;
    int mid = 0;
    char in[1024] = {0};
    char out[1024] = {0};
    scanf("%d", &n);
    scanf("%s", in);
    scanf("%d", &m);

    for (int i=0;i<strlen(in);i++) {
        mid *= n;
        mid += ctoi(in[i]);
    }

    int len = 0;
    while (mid != 0) {
        out[len] = itoc(mid % m);
        len += 1;
        mid /= m;
    }

    for (int i=len-1;i>=0;i--) {
        printf("%c", out[i]);
    }
    printf("\n");
    return 0;
}