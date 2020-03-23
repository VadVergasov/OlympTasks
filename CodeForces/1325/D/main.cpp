// https://codeforces.com/contest/1325/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long u, v, u1;
    cin >> u >> v;
    if (u > v) {
        cout << -1;
        return 0;
    }
    u1 = u;
    vector<int> bits;
    int mx = 0;
    for (int i = 0; i < 60; i++) {
        if (u1 & (1LL << i)) {
            mx = max(mx, i + 1);
        }
    }
    long long cur = (1LL << mx) - 1;
    while (cur > v) {
        for (int i = 60; i >= 0; i--) {
            if ((cur ^ u) & (1LL << i)) {
                cur -= (1LL << i);
            }
        }
    }
    return 0;
}