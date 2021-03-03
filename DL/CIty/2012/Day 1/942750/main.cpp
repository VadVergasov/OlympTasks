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
    int n;
    in >> n;
    vector<int> a;
    for (int i = 2; i <= ceil(sqrt(n)); i++) {
        if (n % i == 0) {
            a.push_back(i);
            a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] * 2 < n) {
            out << a[i];
            return 0;
        }
    }
    out << 1;
    return 0;
}
