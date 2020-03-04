// https://codeforces.com/contest/1305/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a) {
            cin >> i;
        }
        for (auto &i : b) {
            cin >> i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        map<int, int> all;
        for (int i = 0; i < n; i++) {
            if (all[a[i] + b[i]] != 0) {
                int pos = all[a[i] + b[i]];
                swap(b[i], b[pos]);
                all[pos] = 0;
                all[a[pos] + b[pos]] = pos;
            }
            all[a[i] + b[i]]++;
        }
        for (auto i : a) {
            cout << i << " ";
        }
        cout << "\n";
        for (auto i : b) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}