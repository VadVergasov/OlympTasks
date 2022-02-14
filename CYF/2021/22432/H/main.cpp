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

bool cmp(string a, string b) {
    if (a.size() < b.size()) {
        return true;
    } else if (a.size() > b.size()) {
        return false;
    }
    return a < b;
}

int main() {
    string x, y;
    cin >> x >> y;
    if (x == y) {
        cout << x;
        return 0;
    }
    vector<string> a;
    for (int i = 0; i < x.size(); i++) {
        int j = 0;
        while (x[i + j] == y[j] && j < y.size() && j + i < x.size()) {
            j++;
        }
        if (j < y.size() && j + i < x.size()) {
            j--;
        }
        a.push_back(x + y.substr(max(0, j), y.size() - max(0, j)));
    }
    for (int i = 0; i < y.size(); i++) {
        int j = 0;
        while (y[i + j] == x[j] && j < x.size() && j + i < y.size()) {
            j++;
        }
        if (j < x.size() && j + i < y.size()) {
            j--;
        }
        a.push_back(y + x.substr(max(0, j), x.size() - max(0, j)));
    }
    sort(a.begin(), a.end(), cmp);
    cout << a[0];
    return 0;
}
