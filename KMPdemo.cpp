//KMP算法，洛谷P3375
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

const int MAXM = 10000;

int nextTable[MAXM];


void GetNextTable (string pattern) { //创建next表
    int m = pattern.size();
    int j = 0;
    nextTable[j] = -1;
    int i = nextTable[j];
    while (j < m) {
        if (i == -1 || pattern[j] == pattern[i]) {
            i++;
            j++;
            nextTable[j] = i;
        } else {
            i = nextTable[i];
        }
    }
    return ;
}

void KMP(string text, string pattern) {
    GetNextTable(pattern);
    int n = text.size();
    int m = pattern.size();
    int j = 0;
    int i = 0;
    while (i < n) {
        if (j == -1 || text[i] == pattern[j]) {
            i++;
            j++;
        } else {
            j = nextTable[j];
        }
        if (j == m) {
            printf("%d\n", i - j + 1);
            j = nextTable[j];
        }
    }
    return ;
}

int main() {
    string pattern, text;
    cin >> text >> pattern;
    KMP(text, pattern);

    /*
    string str = "ABABA";
    GetNextTable(str);
    for (int j=0;j<=str.size();j++) printf("%d ", nextTable[j]);
    printf("\n");
    */
    for (int j=1;j<=pattern.size();j++) {
        printf("%d ", nextTable[j]);
    }
    printf("\n");
    return 0;
}