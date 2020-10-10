#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<unordered_map<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        int b, c, d;
        cin >> b >> c >> d;
        b--;
        c--;
        d--;
        a[b][c]++;
        a[b][d]++;
        a[c][b]++;
        a[c][d]++;
        a[d][b]++;
        a[d][c]++;
    }
    int current = 0;
    vector<int> ans;
    set<int> h;
    ans.reserve(n);
    for (int i = 0; i < n; i++) {
        h.insert(current);
        ans.push_back(current + 1);
        for (auto [i, j] : a[current]) {
            if (j >= 2 && h.find(i) == h.end()) {
                current = i;
                break;
            }
        }
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}