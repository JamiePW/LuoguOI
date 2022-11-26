#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

struct student {
    string name;
    int mark;
};

student arr[110];

bool Compare (student a, student b) {
    if (a.mark == b.mark) {
        return a.name < b.name;
    } else {
        return a.mark > b.mark;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        cin >> arr[i].mark >> arr[i].name;
    }
    sort(arr, arr+n, Compare);
    cout << arr[0].name << endl;
    return 0;
}