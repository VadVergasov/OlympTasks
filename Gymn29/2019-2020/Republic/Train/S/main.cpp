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
    int n, d;
    in >> n >> d;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    sort(a.begin(), a.end());
    int res = 0, num = a.front() / d, another = a.front() % d;
    for (int i = 0; i < n; i++) {
        if (i == 0 && a[0] == d) {
            continue;
        }
        if (i != 0) {
            num += (a[i] - a[i - 1]) / d;
            another += (a[i] - a[i - 1]) % d;
            if (another > d) {
                another -= d;
                num++;
            }
        }
        if (num > 0) {
            num--;
            res++;
        }
    }
    cout << res;
    return 0;
}