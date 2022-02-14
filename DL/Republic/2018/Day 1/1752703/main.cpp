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
    int n, m;
    in >> n >> n;
    vector<pair<pair<long long, long long>, long long> > a(n);
    for (int i = 0; i < n; i++) {
        long long t1, t2, t3;
        in >> t1 >> t2 >> t3;
        a[i] = make_pair(make_pair(t1, t2), t3);
    }
    double x, y, z, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].first.first;
    }
    sum /= n;
    x = round(sum);
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].first.second;
    }
    sum /= n;
    y = round(sum);
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].second;
    }
    sum /= n;
    z = round(sum);
    out << x << " " << y << " " << z;
    return 0;
}