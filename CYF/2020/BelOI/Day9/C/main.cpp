#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    if (p == 1) {
        for (int i = 0; i < n; i++) {
            vector<pair<int, int> > b;
            b.push_back({a[i], i});
            for (int j = 1; j < n - i; j++) {
                b.push_back({a[i + j] + j, i + j});
            }
            for (int j = 1; j <= i; j++) {
                b.push_back({a[i - j] + j, i - j});
            }
            sort(b.begin(), b.end());
            for (int j = 0; j < b.size(); j++) {
                if (b[j].first == a[i]) {
                    cout << j + 1 << '\n';
                    break;
                }
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            vector<pair<int, int> > b;
            int to_find = 0;

            int res = 0;
            for (int j = n - 1; j >= 0; j--) {
                if (j == i) {
                    to_find = a[j] + n - j - 1;
                }
                b.push_back({a[j] + n - j - 1, j});
            }
            sort(b.begin(), b.end());
            for (int j = 0; j < b.size(); j++) {
                if (b[j].first == to_find) {
                    res = max(res, j + 1);
                    break;
                }
            }
            b.clear();
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    to_find = a[j] + j;
                }
                b.push_back({a[j] + j, j});
            }
            sort(b.begin(), b.end());
            for (int j = 0; j < b.size(); j++) {
                if (b[j].first == to_find) {
                    res = max(res, j + 1);
                    break;
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}