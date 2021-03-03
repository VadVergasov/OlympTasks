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
    long long res = 0;
    bool f = false;
    string s;
    cin >> s;
    vector<long long> a;
    a.push_back(0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            res++;
            if (f) {
                res += a[a.size() - 2];
            }
            a.back()++;
        } else if (s[i] == 'b') {
            a.push_back(a.back());
            f = true;
        } else {
            if (a.size() > 1) {
                long long t = a[0];
                for (int j = 1; j < a.size(); j++) {
                    t *= a[j];
                }
                res += t;
            }
            f = false;
            a.resize(1, 0);
        }
        res %= (long long)(10e9) + 7;
    }
    cout << res;
    return 0;
}
