#include <iostream>
#include <cstdio>
#include <algorithm>

struct Time {
    int T;
    int order;
};

Time arr[1001];

using namespace std;

bool Compare(Time x, Time y) {
    if (x.T == y.T) {
        return x.order < y.order;
    } else {
        return x.T < y.T;
    }
}

int main() {
    int n;
    double wait = 0; //使用int可能会超范围
    double avg;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i].T);
        arr[i].order = i;
    }
    sort(arr, arr+n, Compare);
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i].order+1);
        wait += (double)arr[i].T * (n-1-i);
    }
    printf("\n");
    avg = wait / n;
    printf("%.2f\n", avg);
    return 0;
}