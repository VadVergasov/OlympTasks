#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<pair<int, int> > a(n);
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            a[j] = make_pair(tmp, j);
        }
        sort(a.begin(), a.end());
        cout << "Case #" << i + 1 << ": ";
        while (a.back().first != a[a.size() - 2].first) {
            cout << (char)('A' + a.back().second)
                 << (char)('A' + a.front().second) << " ";
            a.back().first--;
            a.front().first--;
            sort(a.begin(), a.end());
        }
        for (int j = 0; j < (int)a.size() - 3; j++) {
            while (a[j].first > 0 && a[j + 1].first > 0) {
                cout << a[j].first << " " << a[j + 1].first << "\n";
                cout << (char)('A' + a[j].second)
                     << (char)('A' + a[j + 1].second) << " ";
                a[j].first--;
                a[j + 1].first--;
            }
        }
        if (a.size() > 2 && a[a.size() - 3].first != 0) {
            while (a[a.size() - 3].first > 0) {
                cout << (char)('A' + a[a.size() - 3].second) << " ";
                a[a.size() - 3].first--;
            }
        }
        while (a[a.size() - 2].first > 0) {
            cout << (char)('A' + a.back().second)
                 << (char)('A' + a[a.size() - 2].second) << " ";
            a.back().first--;
            a[a.size() - 2].first--;
        }
        cout << endl;
    }
    return 0;
}