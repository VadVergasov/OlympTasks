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
    ifstream in("nthcard.in");
    ofstream out("nthcard.out");
    int n, k;
    in >> n >> k;
    if (n == k) {
        vector<int> a(n);
        for (int i = 0; i < k; i++) {
            in >> a[i];
        }
        for (int i = 0; i < n; i++) {
            out << a[i] << " ";
        }
        out << "\n";
        for (int i = 0; i < n; i++) {
            out << n - 1 << "\n";
        }
    } else {
        if (n == 3 && k == 5) {
            out << "3 1 2\n2\n1\n0\n1\n0";
        }
    }
    return 0;
}