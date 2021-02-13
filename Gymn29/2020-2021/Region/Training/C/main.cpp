#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    long long mn = 10e9;
    cin >> n >> m;
    vector<vector<long long> > a(n + 1, vector<long long>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            long long sum = 0;
            for (int k = 0; k < 3; k++) {
                for (int z = 0; z < 3; z++) {
                    sum += a[i + k][j + z];
                }
            }
            mn = min(mn, sum);
        }
    }
    cout << mn;
    return 0;
}
