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
    in.tie(0);
    ios_base::sync_with_stdio(0);
    long long n;
    in >> n;
    map<long long, long long> d;
    for (long long i = 0; i < n; i++) {
        long long t;
        in >> t;
        while (t % 2 == 0) {
            t /= 2;
            d[2]++;
            if (d[2] > 1) {
                out << 2;
                return 0;
            }
        }
        long long last = 10e5;
        for (long long j = 3; j <= last; j += 2) {
            while (t % j == 0) {
                t /= j;
                d[j]++;
                if (d[j] > 1) {
                    out << j;
                    return 0;
                }
            }
        }
    }
    out << "Beautiful";
    return 0;
}