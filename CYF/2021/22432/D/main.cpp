#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    long long cur = 1;
    for (auto &i : a) {
        for (auto &j : i) {
            j = cur;
            cur += 2;
        }
    }
    if ((n * m) % 2 == 0) {
        a[n - 1][m - 1] = 2;
    }
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}