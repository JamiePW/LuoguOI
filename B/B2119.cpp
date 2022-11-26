#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    char str[40];
    scanf("%s", str);
    if (str[strlen(str)-2] == 'e' && str[strlen(str)-1] == 'r') {
        str[strlen(str)-2] = str[strlen(str)-1] = ' ';
    } else if (str[strlen(str)-2] == 'l' && str[strlen(str)-1] == 'y') {
        str[strlen(str)-2] = str[strlen(str)-1] = ' ';
    } else if (str[strlen(str)-3] == 'i' && str[strlen(str)-2] == 'n' && str[strlen(str)-1] == 'g') {
        str[strlen(str)-3] = str[strlen(str)-2] = str[strlen(str)-1] = ' ';
    }
    printf("%s\n", str);
    return 0;
}