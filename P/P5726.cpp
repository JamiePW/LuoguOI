#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, sum, tem, max, min;
    double result;
    sum = 0;
    max = -1;
    min = 11;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> tem;
        sum += tem;
        if (tem > max) {
            max = tem;
        }
        if (tem < min) {
            min = tem;
        }
    }

    result = 1.0 * (sum - min - max) / (n - 2);
    printf("%.2f\n", result);
    return 0;
}