#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("path.in");
    ofstream cout("path.out");
    int n, m, s;
    cin >> n >> m >> s;
    s--;
    vector<pair<long long, pair<int, int> > > g(m);
    vector<long long> d(n, 1e18);
    vector<int> p(n, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[i] = {c, {a, b}};
    }
    d[s] = 0;
    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (d[g[j].second.first] < 1e18) {
                d[g[j].second.second] = min(d[g[j].second.second],
                                            d[g[j].second.first] + g[j].first);
                x = g[j].second.second;
                p[g[j].second.second] = g[j].second.first;
            }
        }
    }
    vector<int> cycle;
    if (x != -1) {
    }
    for (int i = 0; i < n; i++) {
        if (d[i] == 1e18) {
            cout << "*\n";
            continue;
        }
        cout << d[i] << "\n";
    }
    return 0;
}
