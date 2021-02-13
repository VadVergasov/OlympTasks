#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int next = -1;
        set<int> uniq;
        vector<bool> used(n, false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != a[0] && next == -1) {
                next = i;
            }
            uniq.insert(a[i]);
        }
        if (uniq.size() == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            int cnt = 0;
            used[0] = true;
            for (int i = 0; i < n; i++) {
                if (a[i] != a[0]) {
                    used[i] = true;
                    cout << "1 " << i + 1 << "\n";
                    cnt++;
                }
            }
            if (cnt != n - 1) {
                for (int i = 0; i < n && cnt < n - 1; i++) {
                    if (a[i] != a[next] && !used[i]) {
                        cout << next + 1 << " " << i + 1 << "\n";
                        cnt++;
                    }
                }
            }
        }
    }
    return 0;
}
