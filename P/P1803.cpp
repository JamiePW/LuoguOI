#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct race {
    int start;
    int end;
};

race arr[1000001];

bool Compare(race a, race b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        scanf("%d%d", &arr[i].start, &arr[i].end);
    }
    sort(arr, arr+n, Compare);
    int current = 0;
    int result = 0;
    for (int i=0;i<n;i++) {
        if (arr[i].start >= current) {
            result++;
            current = arr[i].end;
        }
    }
    printf("%d\n", result);
    return 0;
}