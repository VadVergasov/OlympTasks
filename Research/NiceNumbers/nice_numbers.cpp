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

const vector<long long> l = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    // ofstream out("nice.txt");
    set<long long> n;
    for (int i = 0; i <= 10; i++) {
        for (int j = i; j <= 10; j++) {
            vector<long long>::const_iterator first = l.begin() + i;
            vector<long long>::const_iterator last = l.begin() + j;
            vector<long long> cur(first, last);
            do {
                long long num = 0;
                for (auto k : cur) {
                    num *= 10;
                    num += k;
                }
                n.insert(num);
            } while (next_permutation(cur.begin(), cur.end()));
        }
    }
    vector<long long> nice;
    for (auto i : n) {
        nice.push_back(i);
    }
    // for (auto i : nice) {
    //     out << i << " ";
    // }
    vector<bool> dp((int)(4 * 1e8 + 40), false);
    dp[0] = true;
    for (long long i = 0; i <= 30000; i++) {
        if (i % 10000 == 0) {
            cout << "Progress: " << i << "\n";
        }
        for (int j = 0; j < 3; j++) {
            if (dp[i * 4 + j]) {
                for (auto k : nice) {
                    if (i + k < 1e8 + 1) {
                        dp[(i + k) * 4 + j + 1] = true;
                    } else {
                        break;
                    }
                }
            }
        }
        if (!dp[i * 4 + 3]) {
            cout << i << " ";
        }
    }
    for (int i = 0; i <= 30000; i++) {
        if (!dp[i * 4 + 3]) {
            cout << i << " ";
        }
    }
    return 0;
}