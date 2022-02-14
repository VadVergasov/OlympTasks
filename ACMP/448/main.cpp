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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<char> prime(1000000, 1);
    vector<pair<int, int> > res;
    for (int i = 2; i <= 1000; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
    while (n > 1) {
        int num = n + 1;
        while (!prime[num]) {
            num++;
        }
        for (int i = 0; i < (2 * n - num) / 2 + 1; i++) {
            res.push_back(make_pair(n - i, num - n + i));
        }
        n = num - n - 1;
    }
    for (int i = 0; i < res.size(); i++) {
        out << res[i].first << " " << res[i].second << "\n";
    }
    return 0;
}
