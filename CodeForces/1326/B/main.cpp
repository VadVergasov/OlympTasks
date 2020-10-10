// https://codeforces.com/contest/1326/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &i : b) {
        cin >> i;
    }
    vector<int> a(n);
    a[0] = b[0];
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        a[i] = b[i] + mx;
        mx = max(mx, a[i]);
    }
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}