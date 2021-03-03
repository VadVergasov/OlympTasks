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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma,sse,sse2,sse3,sse4")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    cin.tie(0);
    cout.tie(0);
    long long a, b, m, k, p, q;
    cin >> a >> b >> m >> k >> p >> q;
    long long res = 0;
    for (long long i = (floor((a - m) / k) + 1) * k + m; i <= b; i += k) {
        if (i % k == m) {
            long long cur = i;
            int sum = 0;
            while (cur) {
                sum += cur % 10;
                cur /= 10;
            }
            if (p <= sum && sum <= q) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}
