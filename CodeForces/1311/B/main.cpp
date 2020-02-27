// https://codeforces.com/contest/1311/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n, m;
        cin >> n >> m;
        vector<int> a(n), p(m), sorted;
        for (auto &i : a) {
            cin >> i;
        }
        sorted = a;
        sort(sorted.begin(), sorted.end());
        for (auto &i : p) {
            cin >> i;
        }
        bool res = true;
        while (a != sorted) {
            bool was = false;
            for (int i = 0; i < m; i++) {
                if (a[p[i] - 1] > a[p[i]]) {
                    was = true;
                    swap(a[p[i] - 1], a[p[i]]);
                }
            }
            if (!was) {
                cout << "NO\n";
                res = false;
                break;
            }
        }
        if (res) {
            cout << "YES\n";
        }
    }
    return 0;
}