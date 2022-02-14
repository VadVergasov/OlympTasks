// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
    int n;
    cin >> n;
    int mn = 10000000, mx = -100000000;
    map<int, map<int, set<int> > > mp;
    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        mn = min(mn, x1);
        mn = min(mn, y1);
        mx = max(mx, x2);
        mx = max(mx, y2);
        mp[y2][x2].insert(i);
        /*for (int j = y1; j <= y2; j++) {
            for (int k = x1; k <= x2; k++) {
                mp[j][k].insert(i);
            }
        }*/
    }
    int res = 0;
    set<set<int> > was;
    for (int i = mn; i <= mx; i++) {
        for (int j = mn; j <= mx; j++) {
            set<int> t;
            for (int w = 0; w < abs(mx - mn) + 1; w++) {
                for (int h = 0; h < abs(mx - mn) + 1; h++) {
                    for (int x = 0; x <= w; x++) {
                        for (int y = 0; y <= h; y++) {
                            for (auto k : mp[i + y][j + x]) {
                                t.insert(k);
                            }
                        }
                    }
                    if (was.find(t) == was.end()) {
                        was.insert(t);
                        for (auto k : t) {
                            cout << k << " ";
                        }
                        cout << "\n";
                        res++;
                    } else {
                        /*cout << i << " " << j << "\n";
                        for (auto k : t) {
                            cout << k << " ";
                        }
                        cout << "\n";*/
                    }
                }
            }
        }
    }
    cout << res;
    return 0;
}