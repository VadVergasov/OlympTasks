#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> w(n), res;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    int mn = 10e8;
    for (int j = 0; j <= n - k; j++) {
        int mx = 0;
        res.clear();
        for (int i = 0; i < k; i++) {
            if (i % 2 == 0) {
                res.push_back(w[j + i]);
            } else {
                res.push_back(w[n - k + j - i]);
            }
        }
        for (int i = 1; i < res.size(); i++) {
            mx = max(mx, res[i] + res[i - 1]);
        }
        mx = max(mx, res.front() + res.back());
        mn = min(mn, mx);
    }
    cout << mn;
    return 0;
}