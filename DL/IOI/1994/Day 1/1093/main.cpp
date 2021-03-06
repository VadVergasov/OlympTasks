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
    int n;
    cin >> n;
    vector<string> a(n + 1);
    string tmp;
    for (int i = 0; i < n + 1; i++) {
        getline(cin, tmp);
        a[i] = tmp;
    }
    vector<int> sum(n * (n + 1) / 2);
    sum[0] = a[1][0];
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < a[i].size(); j += 2) {
            if (j == 0) {
                sum[i * (i + 1) / 2] = sum[i * (i - 1) / 2];
                continue;
            }
            if (j == a[i].size() - 1) {
                sum[i * (i + 1) / 2 + a[i].size() / 2] =
                    sum[i * (i - 1) / 2 = a[i - 1].size() / 2];
                continue;
            }
            sum[i * (i + 1) / 2 + j / 2] = max();
        }
    }
    return 0;
}
