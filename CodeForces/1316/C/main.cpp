// https://codeforces.com/contest/1316/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> a(n), b(m);
    for (auto &i : a) {
        cin >> i;
        i %= p;
    }
    for (auto &i : b) {
        cin >> i;
        i %= p;
    }
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            pos1 = i;
            break;
        }
    }
    for (int i = 0; i < m; i++) {
        if (b[i]) {
            pos2 = i;
            break;
        }
    }
    cout << pos1 + pos2;
    return 0;
}