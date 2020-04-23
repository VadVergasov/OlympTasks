// https://codeforces.com/contest/1335/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (auto &i : a) {
            cin >> i;
            mp[i]++;
        }
        int mx = 0;
        for (auto [f, s] : mp) {
            mx = max(mx, s);
        }
        cout << min(mx, (int)mp.size() - ((mx == (int)mp.size()) ? 1 : 0))
             << "\n";
    }
    return 0;
}