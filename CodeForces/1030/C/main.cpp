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
    int n, tmp;
    cin >> n;
    string s;
    cin >> s;
    bool res = false;
    for (int i = 2; i <= n; i++) {
        vector<int> sum;
        for (int j = i; j < n; j += i) {
            int sm = 0;
            for (int k = 0; k < j; k++) {
                sm += s[i + k] - '0';
            }
            sum.push_back(sm);
        }
        for (int j = 0; j < sum.size() - 1; j++) {
            if (sum[j] != sum[i]) {
                break;
            } else {
                res = true;
            }
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
