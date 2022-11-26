#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

char arr[1024];

int main() {
    int x, m, temp;
    cin >> x >> m;
    int j = 0;
    while (x != 0) {
        temp = x % m;
        if (temp <= 9) {
            arr[j++] = temp + '0';
        } else {
            arr[j++] = temp - 10 + 'A'; 
        }
        x /= m;
    }
    for (int i=strlen(arr)-1;i>=0;i--) {
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}