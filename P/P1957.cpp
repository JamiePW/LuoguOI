#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int length (int x) {  //返回一个十进制整数的长度
    int result = 0;
    if (x < 0) {
        result += 1;
        x = -1 * x;
    }
    if (x == 0) {
        return 1;
    }

    while (x != 0) {
        result += 1;
        x /= 10;
    }
    return result;
}

int main() {
    char op;
    int result;
    int op1, op2, n;
    string str1, str2, str3;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> str1;
        if (str1.size() == 1 && isalpha(str1[0]) != 0) {
            op = str1[0];
            cin >> str1 >> str2;
            op1 = stoi(str1);
            op2 = stoi(str2);
            //cout << op1 << op << op2 << endl;
        } else {
            cin >> str2;
            op1 = stoi(str1);
            op2 = stoi(str2);
            //cout << op1 << op << op2 << endl;
        }

        if (op == 'a') {
            printf("%d+%d=%d\n", op1, op2, op1+op2);
            result = length(op1+op2);
        } else if (op == 'b') {
            printf("%d-%d=%d\n", op1, op2, op1-op2);
            result = length(op1-op2);
        } else {
            printf("%d*%d=%d\n", op1, op2, op1*op2);
            result = length(op1*op2);
        }
        printf("%d\n", str1.size() + 1 + str2.size() + 1 + result);
    }
    return 0;
}