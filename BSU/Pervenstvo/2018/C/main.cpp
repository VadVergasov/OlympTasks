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
    int n;
    long long sum = 0;
    char tmp;
    cin >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == '+') {
            long long s;
            cin >> s;
            sum += s;
            a.push_back(s);
        }
        if (tmp == '-') {
            sum -= a[0];
            a.erase(a.begin(), a.begin() + 1);
        }
        if (tmp == '?') {
            int res = 0;
            double arr = (double)((sum / (double)a.size()));
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == arr) {
                    res++;
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}
