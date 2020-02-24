#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> b(m + 1);
    multiset<int> p;
    vector<pair<int, int> > diffs(m);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        p.insert(t);
    }
    for (int i = 0; i < m + 1; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
        diffs[i] = make_pair(b[i + 1] - b[i], i);
    }
    sort(diffs.rbegin(), diffs.rend());
    for (int i = 0; i < k; i++) {
        int j = 0;
        auto cur = p.find(diffs[j].second);
        while (cur == p.end()) {
            j++;
            cur = p.find(diffs[j].second);
        }
        p.erase(cur);
        p.insert(*cur + 1);
    }
    for (auto i : p) {
        res += b[i];
    }
    cout << res;
    return 0;
}