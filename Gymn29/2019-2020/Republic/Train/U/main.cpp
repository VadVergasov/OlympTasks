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

#pragma GCC optimize("O2,unroll-loops")

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    for (long long i = 2; i < n; i++) {
        long long n1 = n;
        set<long long> a;
        while (n1) {
            a.insert(n1 % i);
            n1 /= i;
            if (a.size() > 1) {
                break;
            }
        }
        if (a.size() == 1) {
            out << i;
            return 0;
        }
    }
    return 0;
}