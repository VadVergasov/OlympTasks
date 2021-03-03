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

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2")

using namespace std;

bool check(vector<int> &num, int &n, int &m) {
    vector<vector<int> > t(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (num[i * n + j] == 0) {
                num[i * n + j] = 2;
            }
            t[i][j] = num[i * n + j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = i + 1; k < n; k++) {
                for (int z = j + 1; z < m; z++) {
                    if (t[i][j] == t[i][z] && t[i][j] == t[k][j] &&
                        t[i][j] == t[k][z]) {
                        return false;
                    }
                }
            }
        }
    }
}
return true;
}

int main() {
    srand(228400277);
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, c;
    cin >> n >> m >> c;
    vector<vector<int> > res(n, vector<int>(m));
    vector<int> nums(n * m);
    if (c == 2) {
        for (int i = 0; i <= n * m / 2; i++) {
            nums[i] = 1;
        }
        for (int i = ceil((double)n * (double)m / 2.0); i < n * m; i++) {
            nums[i] = 2;
        }
        while (!check(nums, n, m)) {
            random_shuffle(nums.begin(), nums.end());
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << nums[i * n + j] << " ";
            }
            cout << "\n";
        }
    } else {
        for (int i = 0; i <= n * m / 3; i++) {
            nums[i] = 1;
        }
        for (int i = ceil((double)n * (double)m / 3.0); i <= 2 * n * m / 3;
             i++) {
            nums[i] = 2;
        }
        for (int i = ceil(2.0 * (double)n * (double)m / 3.0); i < n * m; i++) {
            nums[i] = 3;
        }
        while (!check(nums, n, m)) {
            random_shuffle(nums.begin(), nums.end());
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << nums[i * n + j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
