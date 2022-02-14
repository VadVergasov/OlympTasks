// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> poses, added;
    int cnt = 0;
    vector<int> res(n), order;
    order.reserve(n);
    for (int i = 0; i < 2 * n; i++) {
        char t;
        cin >> t;
        if (t == '-') {
            int x;
            cin >> x;
            order.push_back(x);
            if (poses.size() == 0) {
                cout << "NO";
                return 0;
            }
            res[*(--poses.end())] = x;
            added.insert(x);
            poses.erase((--poses.end()));
        } else {
            order.push_back(-1);
            poses.insert(cnt);
            cnt++;
        }
    }
    set<int> cur;
    int next = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (order[i] == -1) {
            cur.insert(res[next]);
            next++;
        } else {
            if (*cur.begin() != order[i]) {
                cout << "NO";
                return 0;
            }
            cur.erase(order[i]);
        }
    }
    cout << "YES\n";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
