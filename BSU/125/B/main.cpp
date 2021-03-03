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
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (long long i = 0; i < n; i++) {
        long long up = 1, down = 1;
        for (long long j = i; j < n; j++) {
            up *= a[j];
            down *= b[j];
            if (up == x * down) {
                cout << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }
    cout << "0 0";
    return 0;
}