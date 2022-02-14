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

bool cmp(pair<int, vector<int> > a, pair<int, vector<int> > b) {
    return a.first < b.first;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, vector<int> > > a;
    if (k == 0) {
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            cout << i + 1 << " ";
        }
        return 0;
    }
    if (1 + 2 * k >= n) {
        cout << 1 << "\n";
        cout << ceil((double)n / 2.0);
        return 0;
    }
    for (int i = 0; i < k + 1; i++) {
        int counter = 0;
        vector<int> pos;
        for (int j = i; j <= n; j += (1 + 2 * k)) {
            counter++;
            pos.push_back(j + 1);
        }
        a.push_back(make_pair(counter, pos));
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i].first << "\n";
        for (int j = 0; j < a[i].second.size(); j++) {
            cout << a[i].second[j] << " ";
        }
        cout << "\n";
        == == == = int it = n / (2 * k + 1);
        if (n % (2 * k + 1)) {
            it++;
        }
        cout << it << "\n";
        int step = k + 1;
        if (it * (2 * k + 1) - k > n) {
            step -= it * (2 * k + 1) - k - n;
        }
        for (int i = 0; i < it; i++, step += (2 * k + 1)) {
            cout << step << " ";
>>>>>>> e56c15af9c6933203c4b4eaca8a8c91e01787612
        }
        return 0;
    }
