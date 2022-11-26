#include <iostream>
#include <cstdio>

using namespace std;

//此题如果开二维数组开销可能过大

int carpet[10010][4];

int main() {
    int n, x, y;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> carpet[i][0] >> carpet[i][1] >> carpet[i][2] >> carpet[i][3];
    }
    cin >> x >> y;

    for (int i=n;i>=1;i--) {
        if (x >= carpet[i][0] && x <= carpet[i][0] + carpet[i][2] && y >= carpet[i][1] && y <= carpet[i][1] + carpet[i][3]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}