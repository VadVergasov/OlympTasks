#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> a, b;
    for (int i = 0; i < 2 * n; i++) {
        int t;
        cin >> t;
        if (a[t] != 0) {
            b[t] += i + 1;
        } else {
            a[t] += i + 1;
        }
    }
    long long res1 = 0, res2 = 0, pre1 = 0, pre2 = 0;
    for (auto i : a) {
        res1 += abs((i.second - 1) - pre1);
        pre1 = i.second - 1;
    }
    for (auto i : b) {
        res2 += abs((i.second - 1) - pre2);
        pre2 = i.second - 1;
    }
    cout << res1 + res2;
    return 0;
}