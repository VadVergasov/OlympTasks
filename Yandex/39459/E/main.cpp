// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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

const pair<long long, long long> INF = {numeric_limits<long long>::max(),
                                        numeric_limits<long long>::max()};

void dfs(int v, const vector<vector<pair<int, long long>>>& graph,
         vector<short>& used,
         unordered_map<int, pair<long long, long long>>& require) {
    used[v] = 1;
    for (auto& [next, count] : graph[v]) {
        if (used[next] != 1) {
            if (used[next] == 0) {
                dfs(next, graph, used, require);
            }
            if (require[next] == INF) {
                require[v] = INF;
                continue;
            }
            if (require[v] == INF) {
                continue;
            }
            require[v].first += count * require[next].first;
            require[v].second += count * require[next].second;
        } else {
            require[v] = INF;
            continue;
        }
    }
    used[v] = 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<vector<pair<int, long long>>> graph(n);
    for (int i = 0; i < n - 2; i++) {
        int k;
        cin >> k;
        vector<int> comp(k);
        for (auto& j : comp) {
            cin >> j;
            j--;
        }
        sort(comp.begin(), comp.end());
        for (int j = 0; j < k; j++) {
            int count = 1;
            while (j + count < k && comp[j + count] == comp[j]) {
                count++;
            }
            graph[i + 2].push_back({comp[j], count});
            j += count - 1;
        }
    }
    unordered_map<int, pair<long long, long long>> require;
    require.rehash(n);
    require[0] = {1, 0};
    require[1] = {0, 1};
    vector<short> used(n, 0);
    used[0] = 2;
    used[1] = 2;
    for (int i = 2; i < n; i++) {
        if (used[i] == 0) {
            dfs(i, graph, used, require);
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int a, b, num;
        cin >> a >> b >> num;
        num--;
        const auto& [first, second] = require[num];
        if (first <= a && second <= b) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    return 0;
}
