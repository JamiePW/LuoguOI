#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main() {
    char enc[200];
    scanf("%s", enc);
    for (int i=0;i<strlen(enc);i++) {
        if (isupper(enc[i]) != 0) {
            enc[i] = ((enc[i] - 'A' + 3) % 26) + 'A';
            enc[i] = tolower(enc[i]);
        } else {
            enc[i] = ((enc[i] - 'a' + 3) % 26) + 'a';
            enc[i] = toupper(enc[i]);
        }
    }
    for (int i=strlen(enc)-1;i>=0;i--) {
        printf("%c", enc[i]);
    }
    printf("\n");
    return 0;
}