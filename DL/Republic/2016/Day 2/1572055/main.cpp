// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, x, y;
    in >> n >> x >> y;
    vector<pair<long long, long long>> a(n);
    for (auto &[f, s] : a) {
        in >> f >> s;
    }
    vector<pair<long long, long long>> cur = {{0, 0}, {0, 0}, {0, 0}, {0, 0}};
    for (auto [f, s] : a) {
        if ((f <= 0 && s <= 0) || (f <= 0 && abs(f) >= abs(s)) ||
            (s <= 0 && abs(f) <= abs(s))) {
            cur[0].first += f;
            cur[0].second += s;
        }
    }
    for (auto [f, s] : a) {
        if ((f <= 0 && s >= 0) || (f <= 0 && abs(f) >= abs(s)) ||
            (s >= 0 && abs(f) <= abs(s))) {
            cur[1].first += f;
            cur[1].second += s;
        }
    }
    for (auto [f, s] : a) {
        if ((f >= 0 && s <= 0) || (f >= 0 && abs(f) >= abs(s)) ||
            (s <= 0 && abs(f) <= abs(s))) {
            cur[2].first += f;
            cur[2].second += s;
        }
    }
    for (auto [f, s] : a) {
        if ((f >= 0 && s >= 0) || (f >= 0 && abs(f) >= abs(s)) ||
            (s >= 0 && abs(f) <= abs(s))) {
            cur[3].first += f;
            cur[3].second += s;
        }
    }
    long long res = -1e18;
    for (auto i : cur) {
        for (auto j : cur) {
            res = max(res, abs(x - i.first) + abs(y - j.second));
        }
    }
    out << res;
    return 0;
}
