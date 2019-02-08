#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > a;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back(make_pair(t1, t2));
    }
    ans.push_back(1);
    for (int i = 0; i < n; i += 3) {
        int it = ans[i] - 1;
        int f = a[it].first - 1, s = a[it].second - 1;
        if (a[f].first == s + 1 || a[f].second == s + 1) {
            ans.push_back(f + 1);
            ans.push_back(s + 1);
            if (a[f].first == s + 1) {
                ans.push_back(a[f].second);
            } else {
                ans.push_back(a[f].first);
            }
        } else {
            ans.push_back(s + 1);
            ans.push_back(f + 1);
            if (a[s].first == f + 1) {
                ans.push_back(a[s].second);
            } else {
                ans.push_back(a[s].first);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
