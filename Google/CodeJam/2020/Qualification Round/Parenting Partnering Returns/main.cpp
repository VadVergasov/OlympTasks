#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n;
        cin >> n;
        vector<pair<pair<int, int>, int> > all(n);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            all[i] = {{a, b}, i};
        }
        sort(begin(all), end(all));
        cout << "Case #" << cur << ": ";
        int jamie = 0, cameron = 0;
        string res;
        res.resize(n, 'A');
        for (int i = 0; i < n; i++) {
            if (cameron <= all[i].first.first) {
                cameron = all[i].first.second;
                res[all[i].second] = 'C';
            } else if (jamie <= all[i].first.first) {
                jamie = all[i].first.second;
                res[all[i].second] = 'J';
            } else {
                res = "IMPOSSIBLE";
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}