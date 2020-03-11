#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
    return a.first.first + a.first.second > b.first.first + b.first.second;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<pair<int, int>, int> > a(k);
    vector<vector<bool> > f(n + 1, vector<bool>(m + 1, false));
    int cnt = 0;
    for (auto& [f, s] : a) {
        cin >> f.first >> f.second;
        cnt++;
        s = cnt;
    }
    int res = 0;
    sort(begin(a), end(a), cmp);
    vector<pair<int, char> > r;
    for (int i = 0; i < k; i++) {
        pair<int, int> now = {1, 1};
        while (now != a[i].first) {
            if (a[i].first.first > now.first && !f[now.first + 1][now.second]) {
                r.push_back({a[i].second, 'D'});
                now.first++;
            } else {
                r.push_back({a[i].second, 'R'});
                now.second++;
            }
            res++;
        }
        f[a[i].first.first][a[i].first.second] = true;
    }
    cout << res << "\n";
    for (auto [f, s] : r) {
        cout << f << " " << s << "\n";
    }
    return 0;
}