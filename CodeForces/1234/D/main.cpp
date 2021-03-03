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
    string s;
    cin >> s;
    vector<set<int> > alp(26);
    for (int i = 0; i < s.size(); i++) {
        alp[s[i] - 'a'].insert(i);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int pos;
            char c;
            cin >> pos >> c;
            pos--;
            alp[s[pos] - 'a'].erase(pos);
            s[pos] = c;
            alp[c - 'a'].insert(pos);
        } else {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int res = 0;
            for (int j = 0; j < 26; j++) {
                auto it = alp[j].lower_bound(l);
                if (it != alp[j].end() && *it <= r) {
                    res++;
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}