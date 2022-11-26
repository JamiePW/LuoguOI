#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char str[1024];
    scanf("%s", str);
    int count = 0;
    char current = '-';
    for (int i=0;i<strlen(str);i++) {
        if (str[i] == current) {
            count += 1;
        } else {
            if (i != 0) {
                printf("%d%c", count, current);
            }
            count = 1;
            current = str[i];
        }
    }
    printf("%d%c\n", count, current);
    return 0;
}