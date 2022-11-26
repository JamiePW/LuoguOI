#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

string word[102];
string a, b;

int main() {  //此代码未通过，原因未知
    int count = 0;
    cin >> word[0];
    while (getchar() == ' ') {
        cin >> word[++count];
    }
    cin >> a >> b;
    for (int i=0;i<=count;i++) {
        if (word[i] == a) {
            cout << b << " ";
        } else {
            cout << word[i] << " ";
        }
    }
    printf("\n");
    return 0;
}