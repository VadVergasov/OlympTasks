// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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

long long calc(long long t, long long x, const vector<int>& rems) {
    long long result = 0;
    for (const auto& cur : rems) {
        result += max((t - cur + x) / x, 0LL);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, x, k;
    cin >> n >> x >> k;
    vector<int> reminders;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        bool add = true;
        for (auto& element : reminders) {
            if (element % x == tmp % x) {
                if (tmp < element) {
                    element = tmp;
                }
                add = false;
                break;
            }
        }
        if (add) {
            reminders.push_back(tmp);
        }
    }
    long long left = 1, right = 1e9;
    while (left < right) {
        long long m = (right + left) / 2, count = calc(m, x, reminders);
        if (count >= k) {
            right = m;
        } else {
            left = m + 1;
        }
    }
    cout << left << '\n';
    return 0;
}
