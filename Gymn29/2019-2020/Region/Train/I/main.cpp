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

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp1, tmp2, res = 1;
    in >> n;
    vector<pair<int, int> > a;
    for (int i = 0; i < n; i++) {
        in >> tmp1 >> tmp2;
        int t = __gcd(tmp1, tmp2);
        a.push_back(make_pair(tmp1 / t, tmp2 / t));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second << "\n";
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i].first == a[i + 1].first && a[i].second == a[i + 1].second) {
            continue;
        }
        res++;
    }
    out << res;
    return 0;
}
