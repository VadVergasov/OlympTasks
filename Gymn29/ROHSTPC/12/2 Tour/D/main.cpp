#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    vector<deque<int> > res(k);
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; i++) {
        res[a[i].second - 1].push_front(a[i].first);
    }
    for (int i = 0; i < k; i++) {
        if (res[i].empty()) {
            cout << 0 << "\n";
            continue;
        }
        cout << res[i].size() << " ";
        for (int j = 0; j < max(0, (int)res[i].size() - 1); j++) {
            cout << res[i][j] << " ";
        }
        cout << res[i].back() << "\n";
    }
    return 0;
}