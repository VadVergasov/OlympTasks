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
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<long long> res(n);
    for (long long i = 1; i < n; i++) {
        res[0] += a[i] - a[0];
    }
    for (long long i = 1; i < n; i++) {
        res[i] = res[i - 1] - (n - i) * (a[i] - a[i - 1]);
    }
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
