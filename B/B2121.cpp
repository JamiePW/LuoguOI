#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

char word[201][110];

int main() {
    string str;
    int count = 0;
    int j = 0;
    int max = 0;
    int min = 101;
    getline(cin, str);
    for (int i=0;i<str.size();i++) {
        if (isalpha(str[i]) != 0) {
            word[count][j++] = str[i]; 
        } else {
            if (strlen(word[count]) > max) {
                max = strlen(word[count]);
            }
            if (strlen(word[count]) < min) {
                min = strlen(word[count]);
            }
            j = 0;
            count++;
        }
    }
    for (int i=0;i<count;i++) {
        if (strlen(word[i]) == max) {
            printf("%s\n", word[i]);
            break;
        }
    }
    for (int i=0;i<count;i++) {
        if (strlen(word[i]) == min) {
            printf("%s\n", word[i]);
            break;
        }
    }
    return 0;
}