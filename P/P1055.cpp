#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char ISBN[20];
    scanf("%s", ISBN);
    int judge = 0;
    judge = (ISBN[0]-'0') + (ISBN[2]-'0')*2 + (ISBN[3]-'0')*3 + (ISBN[4]-'0')*4 + (ISBN[6]-'0')*5 + (ISBN[7]-'0')*6 + (ISBN[8]-'0')*7 + (ISBN[9]-'0')*8 + (ISBN[10]-'0')*9;
    judge %= 11;
    if (judge == 10) {
        if (ISBN[12] == 'X') {
            printf("Right\n");
        } else {
            for (int i=0;i<strlen(ISBN)-1;i++) {
                printf("%c", ISBN[i]);
            }
            printf("X\n");
        }
    } else {
        if (judge == ISBN[12]-'0') {
            printf("Right\n");
        } else {
            for (int i=0;i<strlen(ISBN)-1;i++) {
                printf("%c", ISBN[i]);
            }
            printf("%c\n", judge+'0');
        }
    }
    return 0;
}