#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

struct student {
    string name;
    int year;
    int month;
    int day;
    int order;
};

student Students[100];

bool mySort (student x, student y) {
    if (x.year == y.year && x.month == y.month && x.day == y.day) { //生日相同则后录入的排在前面
        return x.order > y.order;
    } else if (x.year == y.year && x.month == y.month) { //年月相同比日期
        return x.day < y.day;
    } else if (x.year == y.year) { //年份相同比月份
        return x.month < y.month;
    } else { //先比年份
        return x.year < y.year;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> Students[i].name >> Students[i].year >> Students[i].month >> Students[i].day;
        Students[i].order = i;
    }
    sort(Students, Students+n, mySort);
    for (int i=0;i<n;i++) {
        cout << Students[i].name << endl;
    }
    return 0;
}


