"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
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
