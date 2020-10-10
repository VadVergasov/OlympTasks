#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > s(n);
    vector<int> res(m);
    for (auto &[l, r] : s) {
        cin >> l >> r;
    }
    for (int i = 2; i <= m; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            int z = i;
            while (z < s[j].first) {
                z += i;
            }
            while (z <= s[j].second) {
                z += i;
                cnt++;
            }
            count *= cnt;
        }
        res[i - 1] = count;
    }
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}