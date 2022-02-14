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

vector<vector<int> > a;
vector<bool> used;

void dfs(int v, int from) {
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[i] && a[v][i] != 0) {
            a[from][i] = max(a[from][v] + a[v][i], a[from][i]);
            dfs(i, v);
        }
    }
}

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp1, tmp2, tmp3;
    in >> n;
    a.resize(n, {});
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        a[i].resize(n, 0);
    }
    for (int i = 0; i < n; i++) {
        in >> tmp1 >> tmp2 >> tmp3;
        a[tmp1 - 1][tmp2 - 1] = tmp3;
        a[tmp2 - 1][tmp1 - 1] = tmp3;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(2);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    dfs(0, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(2);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int mx = 0, start;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mx = max(mx, a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == mx) {
                start = j;
                break;
            }
        }
    }
    for (int i = 0; i < used.size(); i++) {
        used[i] = 0;
    }
    dfs(start, start);
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(2);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mx = max(mx, a[i][j]);
        }
    }
    cout << mx;
    return 0;
}
