//本程序中自行实现了一个日期类并覆写了所需的运算符
#include<iostream>
#include<cstdio>

using namespace std;

int daytab[2][13] = { //预处理
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool isLeapYear (int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

class Date {
    public:
        //全缺省构造函数
        Date(int year = 1900, int month = 1, int day = 1) {
            _year = year;
            _month = month;
            _day = day;
        }
        //拷贝构造函数
        Date(const Date& d) {
            _year = d._year;
            _month = d._month;
            _day = d._day;
        }
        //日期+=天数
        Date& operator+=(int day) {
            int row = isLeapYear(_year);
            _day = _day + day;
            if (_day > daytab[row][_month]) {
                _day = _day - daytab[row][_month];
                _month++;
                if (_month > 12) {
                    _month = _month - 12;
                    _year++;
                }
            }
            return *this;
        }


    //private:
        int _year;
        int _month;
        int _day;
};

int main() {
    int start, end;
    int result = 0; //最终结果
    Date startDate, endDate;
    char str[9] = {0};
    cin >> start >> end;
    startDate = Date(start / 10000, start / 100 % 100, start % 100);
    endDate = Date(end / 10000, end / 100 % 100, end % 100);
    while(true) {
        if (startDate._day == endDate._day && startDate._month == endDate._month && startDate._year == endDate._year) {
            break;
        }
        sprintf(str, "%04d%02d%02d", startDate._year, startDate._month, startDate._day);
        //printf("%s\n", str);
        if (str[0] == str[7] && str[1] == str[6] && str[2] == str[5] && str[3] == str[4]) {
            //printf("%s\n", str);
            result++;
        }
        startDate += 1;
    }
    sprintf(str, "%04d%02d%02d", startDate._year, startDate._month, startDate._day);
    if (str[0] == str[7] && str[1] == str[6] && str[2] == str[5] && str[3] == str[4]) {
        //printf("%s\n", str);
        result++;
    }

    //cout << startDate._year << " " << startDate._month << " " << startDate._day << endl;
    //cout << endDate._year << " " << endDate._month << " " << endDate._day << endl;
    cout << result << endl;
    return 0;
}