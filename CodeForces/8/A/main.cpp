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
    int son = 0;
    string ans[4] = {"fantasy", "forward", "backward", "both"};
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1.find(s2) != -1 && s1.find(s3, s1.find(s2) + s2.size()) != -1) {
        son += 1;
    }
    reverse(s1.begin(), s1.end());
    if (s1.find(s2) != -1 && s1.find(s3, s1.find(s2) + s2.size()) != -1) {
        son += 2;
    }
    cout << ans[son];
    return 0;
}
