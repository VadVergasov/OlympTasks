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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<vector<int> > res(1e6 + 5, vector<int>(101, 0));
    for (long long i = 1; i < 1e6 + 5; i++) {
        long long sum = 0, num = i;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        res[i] = res[i - 1];
        res[i][sum]++;
    }
    for (long long i = 0; i < n; i++) {
        long long l, r, k;
        cin >> l >> r >> k;
        if (k > 100) {
            cout << "0 ";
            continue;
        }
        cout << res[r][k] - res[l - 1][k] << "\n";
    }
    return 0;
}
