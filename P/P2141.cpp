#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[101];
bool judge[101];

int main() {
    int n;
    int count = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i=0;i<n-2;i++) {
        for (int j=i+1;j<n-1;j++) {
            for (int k=j+1;k<n;k++) {
                //题目问的是“有多少个数，恰好等于集合中另外两个不同的数之和”，只判断加和的话会出现重复的情况！！！
                if (arr[i] + arr[j] == arr[k] && judge[k] != true) {  
                    //printf("%d+%d=%d\n", arr[i], arr[j], arr[k]);
                    count += 1;
                    judge[k] = true;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}