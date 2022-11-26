#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char arr[102];
    scanf("%s", arr);
    for (int i=0;i<strlen(arr);i++) {
        printf("%c", arr[i]+arr[(i+1)%strlen(arr)]);
    }
    printf("\n");
    return 0;
}