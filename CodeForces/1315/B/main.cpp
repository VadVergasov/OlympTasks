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
// https://codeforces.com/contest/1315/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int a, b, p;
        cin >> a >> b >> p;
        string s;
        cin >> s;
        vector<pair<int, int>> sum;
        sum.push_back({0, 1});
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'A') {
                while (s[i] == 'A' && i < s.size() - 1) {
                    i++;
                }
                sum.push_back({sum.back().first + a, i + 1});
                i--;

            } else {
                while (s[i] == 'B' && i < s.size() - 1) {
                    i++;
                }
                sum.push_back({sum.back().first + b, i + 1});
                i--;
            }
        }
        // for (auto i : sum) {
        //     cout << i.first << " " << i.second << "\n";
        // }
        for (int i = 0; i < sum.size(); i++) {
            if (sum.back().first - sum[i].first <= p) {
                cout << sum[i].second << "\n";
                break;
            }
        }
    }
    return 0;
}