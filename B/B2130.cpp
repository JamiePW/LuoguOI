#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

string str;

int main() {
    char oper;
    int op1, op2;
    cin >> op1 >> oper >> op2;

    if (oper == '+') {
        printf("%d\n", op1+op2);
    } else if (oper == '-') {
        printf("%d\n", op1-op2);
    } else if (oper == '*') {
        printf("%d\n", op1*op2);
    } else if (oper == '/') {
        printf("%d\n", op1/op2);
    } else {
        printf("%d\n", op1%op2);
    }
    return 0;
}