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
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++) {
        bool re = true;
        long long d, damage = 0, p = 1, res = 0;
        cin >> d;
        string s;
        cin >> s;
        for (long long j = 0; j < s.size(); j++) {
            if (s[j] == 'C') {
                p <<= 1;
            } else {
                damage += p;
            }
        }
        cout << "Case #" << i + 1 << ": ";
        while (damage > d) {
            long long l = -1, r = -1;
            for (long long j = s.size() - 1; j > 0; j--) {
                if (s[j] == 'S' && s[j - 1] == 'C') {
                    l = j;
                    r = j - 1;
                    break;
                }
            }
            if (l == -1 || r == -1) {
                cout << "IMPOSSIBLE\n";
                re = false;
                break;
            }
            swap(s[l], s[r]);
            damage = 0, p = 1;
            for (long long j = 0; j < s.size(); j++) {
                if (s[j] == 'C') {
                    p <<= 1;
                } else {
                    damage += p;
                }
            }
            res++;
        }
        if (re) {
            cout << res << "\n";
        }
    }
    return 0;
}