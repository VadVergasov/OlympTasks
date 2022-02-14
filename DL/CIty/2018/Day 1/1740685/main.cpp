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

bool cmp(pair<int, int> a, pair<int, int> b) { return a.second < b.second; }

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, k, tmp;
    in >> n >> k;
    vector<int> a(k + 1, 0);
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a[tmp]++;
    }
    vector<pair<int, int> > b;
    for (int i = 0; i < k + 1; i++) {
        if (a[i] != 0) {
            b.push_back(make_pair(i, a[i]));
        }
    }
    sort(b.begin(), b.end(), cmp);
    long long res = (k - (long long)b.size()) * n, i = 0;
    while (n) {
        res += n;
        n -= b[i].second;
        i++;
    }
    out << res;
    return 0;
}
