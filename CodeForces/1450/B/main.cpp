#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int> > a(n);
        for (auto &i : a) {
            cin >> i.first >> i.second;
        }
        bool r = false;
        for (int i = 0; i < n; i++) {
            long long mx = 0;
            for (int j = 0; j < n; j++) {
                mx = max(mx, (long long)(abs(a[i].first - a[j].first) +
                                         abs(a[i].second - a[j].second)));
            }
            if (mx > k) {
                continue;
            } else {
                r = true;
                cout << "1\n";
                break;
            }
        }
        if (!r) {
            cout << "-1\n";
        }
    }
    return 0;
}
