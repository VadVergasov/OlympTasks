// https://codeforces.com/contest/1315/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (auto &i : b) {
            cin >> i;
        }
        vector<int> a(2 * n, -1);
        set<int> was;
        for (int i = 0; i < n; i++) {
            a[2 * i] = b[i];
            was.insert(b[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = a[2 * i] + 1; j <= 2 * n; j++) {
                if (was.find(j) == was.end()) {
                    a[2 * i + 1] = j;
                    was.insert(j);
                    break;
                }
            }
        }
        bool res = true;
        for (int i = 0; i < n; i++) {
            if (a[2 * i] > a[2 * i + 1]) {
                swap(a[2 * i], a[2 * i + 1]);
            }
            if (min(a[2 * i], a[2 * i + 1]) != b[i]) {
                cout << "-1\n";
                res = false;
                break;
            }
        }
        if (res) {
            for (auto i : a) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}