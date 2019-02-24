#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > s(n);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        s[t1 - 1].push_back(t2 - 1);
    }
    for (int i = 0; i < n; i++) {
        sort(s[i].rbegin(), s[i].rend());
    }
    for (int i = 0; i < n; i++) {
        multiset<int> to;
        int res = 0;
        int cur = i;
        int rest = m;
        vector<vector<int> > t = s;
        while (rest) {
            if (to.find(cur) != to.end()) {
                rest -= to.count(cur);
                to.erase(cur);
            }
            if (t[cur].size() != 0) {
                // cout << cur << " " << t[cur].front() << "\n";
                to.insert(t[cur].front());
                /*for (auto i : to) {
                    cout << i << " ";
                }
                cout << "\n\n";*/
                t[cur].erase(t[cur].begin(), t[cur].begin() + 1);
            }
            cur++;
            res++;
            if (cur == n) {
                cur = 0;
            }
        }
        cout << res - 1 << " ";
    }
    return 0;
}