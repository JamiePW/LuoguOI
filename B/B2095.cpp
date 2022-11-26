#include <iostream>
#include <cstdio>
#include <vector>
#include <math.h>

using namespace std;

vector<double> white;

int main() {
    int n;
    double max, min, tmp, avg;
    int maxindex, minindex;
    scanf("%d", &n);
    scanf("%lf", &max);
    white.push_back(max);
    min = max;
    maxindex = 0;
    minindex = 0;

    for (int i=0;i<n-1;i++) {
        scanf("%lf", &tmp);
        white.push_back(tmp);
        if (tmp > max) {
            max = tmp;
            maxindex = white.size() - 1;
        } else if (tmp < min) {
            min = tmp;
            minindex = white.size() - 1;
        }
    }

    //printf("%d %d\n", maxindex, minindex);

    white.erase(white.begin() + maxindex);
    if (minindex > maxindex) {
        minindex--;
    }
    white.erase(white.begin() + minindex);

    tmp = 0;
    for (int i=0;i<white.size();i++) {
        tmp += white[i];
    }
    avg = tmp / (n-2);
    printf("%.2f ", avg);

    max = 0;
    for (int i=0;i<white.size();i++) {
        tmp = fabs(white[i] - avg);
        if (tmp > max) {
            max = tmp;
        }
    }
    printf("%.2f\n", max);

    return 0;
}