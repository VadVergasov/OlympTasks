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
    ifstream in("input.txt");
    ofstream out("output.txt");
    long double n, m, k, sum1 = 0, sum2 = 0;
    in >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &i : a) {
        in >> i;
        sum1 += i;
    }
    for (auto &i : b) {
        in >> i;
        sum2 += i;
    }
    out << (long long)(1 + ceil(k / min(sum1, sum2)));
    return 0;
}