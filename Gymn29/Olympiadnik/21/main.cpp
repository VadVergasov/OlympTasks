// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    vector<int> b;
    vector<pair<int, int> > a;
    in >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        a[i] = make_pair(t, i);
    }
    in >> m;
    b.resize(m);
    if (m == 0) {
        return 0;
    }
    if (n == 0) {
        for (int i = 0; i < m; i++) {
            out << -1 << " ";
        }
        return 0;
    }
    for (int i = 0; i < m; i++) {
        in >> b[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++) {
        int seek = b[i];
        int res = lower_bound(a.begin(), a.end(), make_pair(seek, 1000000)) -
                  a.begin() - 1;
        if (a[res].first == seek) {
            out << a[res].second + 1 << " ";
        } else {
            out << -1 << " ";
        }
    }
    return 0;
}
