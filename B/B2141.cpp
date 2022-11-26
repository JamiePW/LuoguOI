#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

long long To10(string x, int B) {  //将一个B进制正整数x转换为10进制的
    long long result = 0;
    for (int i=0;i<x.size();i++) {
        result = result * B + x[i] - '0';
    }
    return result;
}

//此题需开long long否则会超范围

int main() {
    int max;
    string p, q, r;
    cin >> p >> q >> r;
    //首先根据各位数字判断可能的最小进制
    max = 1;
    for (int i=0;i<p.size();i++) {
        if (max < p[i] - '0') {
            max = p[i] - '0';
        }
    }
    for (int i=0;i<q.size();i++) {
        if (max < q[i] - '0') {
            max = q[i] - '0';
        }
    }
    for (int i=0;i<r.size();i++) {
        if (max < r[i] - '0') {
            max = r[i] - '0';
        }
    }
    //cout << max << endl; //最小进制是max+1进制
    for (int B = max+1;B<=16;B++) {
        if (To10(p, B) * To10(q, B) == To10(r, B)) {
            cout << B << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}