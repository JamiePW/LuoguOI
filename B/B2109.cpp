#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string str;
    int result = 0;
    getline(cin, str);
    for (int i=0;i<str.size();i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}