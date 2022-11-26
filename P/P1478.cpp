#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct apple {
    int h; //高度
    int y; //力气
    int order; //输入顺序
};

apple arr[5009];

bool Compare (apple a, apple b) {
    if (a.y == b.y) {
        return a.order < b.order;
    } else {
        return a.y < b.y;
    }
}

int main() {
    int n, s, a, b;
    int result = 0;
    scanf("%d %d %d %d", &n, &s, &a, &b);
    for (int i=0;i<n;i++) {
        scanf("%d%d", &arr[i].h, &arr[i].y);
        arr[i].order = i;
    }
    sort(arr, arr+n, Compare);
    for (int i=0;i<n;i++) {
        //printf("%d %d\n", arr[i].h, arr[i].y);
        if (arr[i].h <= (a+b) && s >= arr[i].y) {
            result++;
            s -= arr[i].y;
        }
    }
    printf("%d\n", result);
    return 0;
}