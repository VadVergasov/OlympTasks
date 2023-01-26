// Main code for this task.
// Copyright (C) 2023  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> matrix(n);
    vector<pair<int, int>> cities(n);
    for (auto& [f, s] : cities) {
        cin >> f >> s;
    }
    int k, start, end;
    cin >> k >> start >> end;
    start--;
    end--;
    for (size_t first = 0; const auto& [f, s] : cities) {
        for (size_t second = 0; const auto& [f1, s1] : cities) {
            if (first == second) {
                second++;
                continue;
            }
            long long dist = static_cast<long long>(abs(f - f1)) +
                             static_cast<long long>(abs(s - s1));
            if (dist > k) {
                second++;
                continue;
            }
            matrix[first].push_back(second);
            matrix[second].push_back(first);
            second++;
        }
        first++;
    }
    vector<bool> used(n, false);
    used[start] = true;
    queue<pair<int, int>> q;
    q.push({start, 0});
    while (!q.empty()) {
        auto [current, length] = q.front();
        for (const auto& i : matrix[current]) {
            if (!used[i]) {
                if (i == end) {
                    cout << length + 1 << endl;
                    return 0;
                }
                used[i] = true;
                q.push({i, length + 1});
            }
        }
        q.pop();
    }
    cout << -1;
    return 0;
}
