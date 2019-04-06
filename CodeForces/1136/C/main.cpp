#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long> > a(n, vector<long long>(m)), b;
    b = a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        multiset<long long> first, second;
        int cur = i;
        while (cur > -1) {
            first.insert(a[cur][cur]);
            second.insert(b[cur][cur]);
            cur--;
        }
        if (first != second) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}