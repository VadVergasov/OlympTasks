#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<pair<int, int> > a(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            a[i] = {x, y};
        }
        sort(a.begin(), a.end());
        int x = 0, y = 0, cur = 0;
        bool res = true;
        string r = "";
        while ((x <= a.back().first || y <= a.back().second) && cur < n) {
            if (x > a[cur].first || y > a[cur].second) {
                res = false;
                break;
            }
            if (x < a[cur].first) {
                x++;
                r += "R";
            } else if (y < a[cur].second) {
                y++;
                r += "U";
            } else {
                cur++;
            }
        }
        if (!res) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << r << "\n";
        }
    }
    return 0;
}