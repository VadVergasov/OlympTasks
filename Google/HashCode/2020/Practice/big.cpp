#include <bits/stdc++.h>

using namespace std;

int main() {
    string test = "b_small";
    ifstream cin(test + ".in");
    ofstream cout(test + ".out");
    int n, m;
    cin >> m >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> res;
    n--;
    while (m > 1e6) {
        res.push_back(n);
        m -= a[n];
        n--;
    }
    n++;
    vector<bool> dp(m + 1);
    vector<int> p(m + 1);
    dp[0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = m; j >= a[i]; --j) {
            if (!dp[j] && dp[j - a[i]]) {
                dp[j] = true;
                p[j] = i;
            }
        }
    }
    for (int i = m; i > 0; i--) {
        if (dp[i]) {
            res.push_back(p[i]);
            i -= a[p[i]] - 1;
        }
    }
    cout << res.size() << "\n";
    sort(res.begin(), res.end());
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}