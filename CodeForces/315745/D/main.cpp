#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<pair<pair<int, int>, vector<int>>> a(n);
    for (int i = 0; i < n; i++) {
        int m, sec;
        cin >> m >> sec;
        a[i].second.resize(m);
        a[i].first.first = sec;
        a[i].first.second = i;
        for (auto &j : a[i].second) {
            cin >> j;
        }
    }
    sort(a.begin(), a.end());
    do {
        vector<int> coords;
        int pos = 0;
        for (auto [f, s] : a) {
            for (auto j : s) {
                coords.push_back(pos + j);
            }
            pos += f.first;
        }
        sort(coords.begin(), coords.end());
        set<int> dist;
        for (int i = 1; i < (int)coords.size(); i++) {
            dist.insert(coords[i] - coords[i - 1]);
        }
        if (dist.size() < 2) {
            cout << "Yes\n";
            for (auto i : a) {
                cout << i.first.second + 1 << " ";
            }
            return 0;
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << "No\n";
    return 0;
}
