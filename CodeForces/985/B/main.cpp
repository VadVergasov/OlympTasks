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
    int n, m;
    string tmp;
    cin >> n >> m;
    vector<string> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    vector<int> sum;
    sum.resize(m, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[j] += a[i][j] - '0';
        }
    }
    if (n == 1) {
        cout << "NO";
        return 0;
    }
    string mask;
    bool res = true;
    for (int i = 0; i < m; i++) {
        if (sum[i] == 0) {
            res = false;
            break;
        }
        if (sum[i] == 1) {
            mask += '0';
        } else {
            mask += '1';
        }
    }
    if (!res) {
        cout << "NO";
        return 0;
    }
    res = false;
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == mask[j] || mask[j] == '1' && a[i][j] == '0') {
                t++;
            }
        }
        if (t == m) {
            res = true;
            break;
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
