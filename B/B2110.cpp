#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

bool visit[30]; //代表该字符是否出现过
bool flag[30]; //代表该字符是否只出现过一次

int main() {
    string str;
    //getline(cin, str); //getline不行，但是cin就可以，原因未知
    cin >> str;
    for (int i=0;i<str.size();i++) {
        if (visit[str[i] - 'a'] == true) {
            flag[str[i] - 'a'] = true;
        }
        visit[str[i] - 'a'] = true;
    }
    for(int i=0;i<str.size();i++) {
        if (flag[str[i] - 'a'] == false) {
            printf("%c\n", str[i]);
            return 0;
        }
    }
    printf("no\n");
    return 0;
}