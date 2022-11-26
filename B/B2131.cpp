#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int n, cough;
    float temp;
    string name;
    int count = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> name >> temp >> cough;
        if (temp >= 37.5 && cough == 1) {
            count += 1;
            cout << name << endl;
        }
    }
    printf("%d\n", count);
    return 0;
}