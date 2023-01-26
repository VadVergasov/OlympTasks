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

long long get_sum(long long n, long long d) { return n * (n - 1) * d / 2; }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long sum = 0, count = 0;
    vector<pair<long long, long long> > a(n);
    for (auto& [f, s] : a) {
        cin >> f >> s;
        sum += s * f;
        count += f;
    }
    long long target = sum / count, result = 0, S = 0, m = 0;
    for (auto& [count, value] : a) {
        if (value == target) {
            result += abs(S - m) * count;
        } else {
            long long x = (S - m) / (target - value);
            if (x <= 0 || count <= x) {
                result +=
                    abs((S - m) * count + get_sum(count + 1, value - target));
            } else {
                result += abs((S - m) * x + get_sum(x + 1, value - target));
                result %= (long long)(1e9 + 7);
                result +=
                    abs(((S + value * x) - (m + target * x)) * (count - x) +
                        get_sum(count - x + 1, value - target));
            }
        }
        result %= (long long)(1e9 + 7);
        S += value * count;
        m += target * count;
    }
    cout << result;
    return 0;
}
