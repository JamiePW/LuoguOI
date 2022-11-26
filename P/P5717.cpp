#include <iostream>
#include <cstdio>
#define ll long long

using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    if (a+b <= c || a+c <= b || b+c <= a) {
        cout << "Not triangle" << endl;
        return 0;
    } else {
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            cout << "Right triangle" << endl;
        } else if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a) {
            cout << "Obtuse triangle" << endl;
        } else {
            cout << "Acute triangle" << endl;
        }

        if (a == b || a == c || b == c) {
            cout << "Isosceles triangle" << endl;
        }

        if (a == b && b == c && a == c) {
            cout << "Equilateral triangle" << endl;
        }
    }
    return 0;
}