#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct gold {
    double m;
    double w;
    double price;
};

gold arr[109];

bool Compare(gold a, gold b) {
    return a.price > b.price;
}

int main() {
    int n;
    double T;
    double result = 0;
    scanf("%d %lf", &n, &T);
    for (int i=0;i<n;i++) {
        scanf("%lf %lf", &arr[i].m, &arr[i].w);
        arr[i].price = arr[i].w / arr[i].m;
    }
    sort(arr, arr+n, Compare);
    for (int i=0;i<n;i++) {
        //printf("%g %g %g\n", arr[i].m, arr[i].w, arr[i].price);
        if (T == 0) {
            break;
        }
        if (arr[i].m < T) {
            T -= arr[i].m;
            result += arr[i].w;
        } else {
            result += T * arr[i].price;
            T = 0;
        }
    }
    printf("%.2f\n", result);
    return 0;
}