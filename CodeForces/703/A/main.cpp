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
    int n, m = 0, k = 0, tmp1, tmp2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        if (tmp1 > tmp2) {
            m++;
        } else if (tmp1 < tmp2) {
            k++;
        }
    }
    if (m == k) {
        cout << "Friendship is magic!^^";
    } else if (m < k) {
        cout << "Chris";
    } else {
        cout << "Mishka";
    }
    return 0;
}
