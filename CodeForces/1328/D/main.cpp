// https://codeforces.com/contest/1328/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, res;
        cin >> n;
        vector<int> t(n);
        set<int> all;
        for (auto &i : t) {
            cin >> i;
        }
        vector<int> r(n, 0);
        for (int i = 0; i < n; i++) {
            int next = i + 1, prev = i - 1;
            if (prev == -1) {
                prev = n - 1;
            }
            if (next == n) {
                next = 0;
            }
            r[i] = 1;
            while ((r[i] == r[next] && t[i] != t[next]) ||
                   (r[i] == r[prev] && t[i] != t[prev])) {
                r[i]++;
            }
        }
        for (int i = 0; i < n; i++) {
            int next = i + 1, prev = i - 1;
            if (prev == -1) {
                prev = n - 1;
            }
            if (next == n) {
                next = 0;
            }
            r[i] = 1;
            while ((r[i] == r[next] && t[i] != t[next]) ||
                   (r[i] == r[prev] && t[i] != t[prev])) {
                r[i]++;
            }
        }
        for (auto i : r) {
            all.insert(i);
        }
        res = all.size();
        cout << res << "\n";
        for (auto i : r) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}