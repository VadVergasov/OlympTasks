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
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        int len1 = ceil(log2(l)), len2 = floor(log2(r));
        long long res = 0;
        if (len1 > len2) {
            for (long long i = l; i <= r; i++) {
                string s = "";
                long long num = i;
                while (num) {
                    s += to_string(num % 2);
                    num >>= 1;
                }
                string sub1 = s.substr(0, s.size() / 2),
                       sub2 = s.substr((s.size() + 1) / 2, s.size() / 2);
                reverse(sub1.begin(), sub1.end());
                if (sub1 == sub2) {
                    res++;
                }
            }
        } else {
            for (long long i = l; i < min(r, (1LL << len1)); i++) {
                string s = "";
                long long num = i;
                while (num) {
                    s += to_string(num % 2);
                    num >>= 1;
                }
                string sub1 = s.substr(0, s.size() / 2),
                       sub2 = s.substr((s.size() + 1) / 2, s.size() / 2);
                reverse(sub1.begin(), sub1.end());
                if (sub1 == sub2) {
                    res++;
                }
            }
            for (int i = len1; i < len2; i++) {
                res += (1LL << i / 2);
            }
            for (long long i = max(l, (1LL << len2)); i <= r; i++) {
                string s = "";
                long long num = i;
                while (num) {
                    s += to_string(num % 2);
                    num >>= 1;
                }
                string sub1 = s.substr(0, s.size() / 2),
                       sub2 = s.substr((s.size() + 1) / 2, s.size() / 2);
                reverse(sub1.begin(), sub1.end());
                if (sub1 == sub2) {
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}
