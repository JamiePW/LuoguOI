#include <iostream>
#include <cstdio>

using namespace std;

char arr1[12][12];
char arr2[12][12];
bool flag[10];

//动笔画画图更好理解

int main() {
    int n;
    for (int i=0;i<10;i++) {
        flag[i] = true;
    }
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%s", arr1[i]);
    }
    for (int i=0;i<n;i++) {
        scanf("%s", arr2[i]);
    }

    //90°
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[j][n-1-i]) {
                flag[1] = false;
                break;
            }
        }
    }
    if (flag[1] == true) {
        printf("1\n");
        return 0;
    }

    //180°
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[n-1-i][n-1-j]) {
                flag[2] = false;
                break;
            }
        }
    }
    if (flag[2] == true) {
        printf("2\n");
        return 0;
    }

    //270°
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[n-1-j][i]) {
                flag[3] = false;
                break;
            }
        }
    }
    if (flag[3] == true) {
        printf("3\n");
        return 0;
    }

    //反射
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[i][n-1-j]) {
                flag[4] = false;
                break;
            }
        }
    }
    if (flag[4] == true) {
        printf("4\n");
        return 0;
    }

    //反射+90°
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[n-1-j][n-1-i]) {
                flag[5] = false;
                break;
            }
        }
    }
    if (flag[5] == true) {
        printf("5\n");
        return 0;
    }

    //反射+180°
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[n-1-i][j]) {
                flag[6] = false;
                break;
            }
        }
    }
    if (flag[6] == true) {
        printf("5\n");
        return 0;
    }

    //反射+270°
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[j][i]) {
                flag[7] = false;
                break;
            }
        }
    }
    if (flag[7] == true) {
        printf("5\n");
        return 0;
    }

    //不变
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr1[i][j] != arr2[i][j]) {
                flag[8] = false;
                break;
            }
        }
    }
    if (flag[8] == true) {
        printf("6\n");
        return 0;
    }

    printf("7\n");
    return 0;
}