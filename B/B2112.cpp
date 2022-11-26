#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main() {
    int n;
    char arr1[10];
    char arr2[10];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%s %s", arr1, arr2);
        if (strlen(arr1) == strlen(arr2)) {
            printf("Tie\n");
        } else {
            if (strlen(arr1) == 4) {         //Rock
                if (strlen(arr2) == 8) {
                    printf("Player1\n");
                } else if (strlen(arr2) == 5) {
                    printf("Player2\n");
                }
            } else if (strlen(arr1) == 8) { //Scissors
                if (strlen(arr2) == 4) {
                    printf("Player2\n");
                } else if (strlen(arr2) == 5) {
                    printf("Player1\n");
                }
            } else if (strlen(arr1) == 5) {                        //paper
                if (strlen(arr2) == 4) {
                    printf("Player1\n");
                } else if (strlen(arr2) == 8) {
                    printf("Player2\n");
                }
            }
        }
    }
    return 0;
}