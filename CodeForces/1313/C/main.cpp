// https://codeforces.com/contest/1313/problem/C1
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> m(n), a(n);
    for (auto &i : m) {
        cin >> i;
    }
    long long res = 0, pos = 0;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        a[i] = m[i];
        sum += a[i];
        for (int j = i - 1; j >= 0; j--) {
            a[j] = min(a[j + 1], m[j]);
            sum += a[j];
        }
        for (int j = i + 1; j < n; j++) {
            a[j] = min(a[j - 1], m[j]);
            sum += a[j];
        }
        if (res < sum) {
            res = sum;
            pos = i;
        }
    }
    a[pos] = m[pos];
    for (int i = pos - 1; i >= 0; i--) {
        a[i] = min(a[i + 1], m[i]);
    }
    for (int i = pos + 1; i < n; i++) {
        a[i] = min(a[i - 1], m[i]);
    }
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}