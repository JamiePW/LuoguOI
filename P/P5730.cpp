#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const char disp[5][10][5] = {
    {"XXX", "..X", "XXX", "XXX", "X.X", "XXX", "XXX", "XXX", "XXX", "XXX"},
    {"X.X", "..X", "..X", "..X", "X.X", "X..", "X..", "..X", "X.X", "X.X"},
    {"X.X", "..X", "XXX", "XXX", "XXX", "XXX", "XXX", "..X", "XXX", "XXX"},
    {"X.X", "..X", "X..", "..X", "..X", "..X", "X.X", "..X", "X.X", "..X"},
    {"XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX"},
};

int main() {
    int n;
    char arr[110];
    cin >> n;
    scanf("%s", arr);
    for (int i=0;i<5;i++) {
        for (int j=0;j<n;j++) {
            if (j != 0) {
                printf(".");
            }
            printf("%s", disp[i][arr[j]-'0']);
        }
        printf("\n");
    }
    return 0;
}