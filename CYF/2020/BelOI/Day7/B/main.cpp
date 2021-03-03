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
#include "neutrino.h"

using namespace std;

int main() {
    int n = Init();
    set<int> candidates;
    while (candidates.size() != 1) {
        int x = (1 << (int)log2(n)), y = 1;
        int res = NeutrinoFlow(x, y);
        cout << res << " " << x << " " << y << endl;
        if (res == x) {
            Locate(res - y);
        }
        for (int i = res; i < n; i += res) {
            candidates.insert(i - y);
        }
        for (auto i : candidates) {
            cout << i << " ";
        }
        cout << endl;
    }
    Locate(*candidates.begin());
    return 0;
}