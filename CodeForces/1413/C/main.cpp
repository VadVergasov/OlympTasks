#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    vector<int> a(6);
    for (auto &i : a) {
        cin >> i;
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &i : b) {
        cin >> i;
    }
    vector<pair<int, int> > notes;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < n; j++) {
            notes.push_back({b[j] - a[i], j});
        }
    }
    sort(notes.begin(), notes.end());
    multiset<int> cur, lads;
    int i1 = 0, i2 = 0;
    long long res = 1e9;
    while (i2 < notes.size()) {
        if (cur.size() < n) {
            cur.insert(notes[i2].second);
            lads.insert(notes[i2].first);
            i2++;
        } else {
            res = min(res, (long long)(*(--lads.end()) - *lads.begin()));
            cur.erase(cur.find(notes[i1].second));
            lads.erase(lads.find(notes[i1].first));
            i1++;
        }
    }
    cout << res;
    return 0;
}
