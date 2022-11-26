#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>

//容易忽略的两个问题：
//1、单词之间不一定只有一个空格
//2、不要使用子串查找功能，会出错，应当自行标记单词的出现位置

using namespace std;

map<string, int> count;  //统计单词出现次数
map<string, int> pos;  //记录单词首次出现位置

int main() {
    map<string, int>::iterator it;
    string target, str, tem;
    cin >> target;
    for (int i=0;i<target.size();i++) {
        target[i] = tolower(target[i]);
    }
    getline(cin, str);
    getline(cin, str);  //两次读入，清除掉多余的回车符
    for (int i=0;i<str.size();i++) {
        if (isalpha(str[i]) != 0) {
            str[i] = tolower(str[i]);
        }
    }
    //cout << str << endl;

    tem = "";
    for (int i=0;i<str.size();i++) {
        if (str[i] == ' '){
            if (count.empty() || count.find(tem) == count.end()) {  //记录频次
                count.insert(pair<string, int>(tem, 1));
            } else {
                count[tem] += 1;
            }

            if (pos.empty() || pos.find(tem) == pos.end()) { //记录第一次出现的位置
                pos.insert(pair<string, int>(tem, i-tem.size()));
            }
            tem = "";
            while (isalpha(str[i+1]) == 0 && i < str.size()) { //考虑多个空格的情况，并且不能越界！！！
                i += 1;
            }
        } else {
            tem += str[i];
        }
    }
    //记录最后一个单词
    if (count.empty() || count.find(tem) == count.end()) {
        count.insert(pair<string, int>(tem, 1));
    } else {
        count[tem] += 1;
    }

    if (pos.empty() || pos.find(tem) == pos.end()) {
        pos.insert(pair<string, int>(tem, str.size()-tem.size()));
    }

    /*for (it = count.begin(); it != count.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    printf("\n");
    for (it = pos.begin(); it != pos.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }*/

    if (count.find(target) == count.end()) {
        cout << -1 << endl;
    } else {
        printf("%d %d\n", count[target], pos[target]);
    }
    return 0;
}