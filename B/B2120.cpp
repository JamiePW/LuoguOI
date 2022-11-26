#include <iostream>
#include <cstdio>
#include <string>

int main() {
    string str;
    int i = 0; 
    while(cin >> str) {
        if (i != 0) {
            printf(",");
        }
        printf("%d", str.size());
        i += 1;
    }
    printf("\n");
    return 0;
}