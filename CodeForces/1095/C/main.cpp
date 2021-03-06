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
    int n, k, o = 0;
    cin >> n >> k;
    vector<int> b;
    multiset<int> ans;
    if (n < k) {
        cout << "NO";
        return 0;
    }
    while (n) {
        b.push_back(n % 2);
        if (b.back() == 1) {
            o++;
        }
        n /= 2;
    }
    if (o > k) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 1) {
            ans.insert(pow(2, i));
        }
    }
    while (ans.size() < k) {
        int t = *ans.rbegin();
        ans.erase(ans.find(t));
        ans.insert(t / 2);
        ans.insert(t / 2);
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}
