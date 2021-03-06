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
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k, tmp, t1, t2;
    in >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    a.push_back(0);
    for (int i = 0; i < k; i++) {
        in >> t1 >> t2;
        int res = 0;
        int c = 1;
        for (int j = t1 - 1; j < t2; j++) {
            if (a[j] < a[j + 1]) {
                c++;
            } else {
                res = max(res, c);
                c = 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
