#include<iostream>
#include<cstdio>

using namespace std;

int daytab[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

string str;

int main () {
    int M, D;
    int result = 0;
    int flag; //用来标记修改月份时是否需要再修改日期
    cin >> str;
    M = (str[0]- '0') * 10 + str[1] - '0';
    D = (str[3]- '0') * 10 + str[4] - '0';
    if (M >= 1 && M <= 12) { // 如果月份合规
        if (!(D >= 1 && D <= daytab[M])) { // 如果日期不合规，更改一位即可
            result++;
        }
    } else { //如果月份不合规，首先必然要修改一位使月份合规
        result++;
        flag = 0;
        //之后要根据每种修改的结果查看是否可以使日期合规（或者说不需要再对日期做修改），可以就将flag置为1
        for (int i=0;i<3;i++) { //月份的十位只有0，1，2三种情况
            M = i * 10 + str[1] - '0';
            if (M >= 1 && M <= 12) {
                if (D >= 1 && D <= daytab[M]) {
                    flag = 1;
                    break;
                }
            }
        }
        for (int i=0;i<10;i++) { //月份的个位都有可能
            M = (str[0]- '0') * 10 + i;
            if (M >= 1 && M <= 12) {
                if (D >= 1 && D <= daytab[M]) {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) {
            result++;
        }
    }
    
    
    
    cout << result << endl;
    return 0;
}