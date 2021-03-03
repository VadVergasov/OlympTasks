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

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    in.tie(0);
    int n, k;
    in >> n >> k;
    string s;
    in >> s;
    int res = 0;
    for (int i = 0; i <= n - k; i++) {
        int balance = 0;
        for (int j = 0; j < k; j++) {
            if (s[i + j] == '(') {
                balance++;
            } else if (s[i + j] == ')') {
                balance--;
            }
            if (balance < 0) {
                break;
            }
        }
        if (balance == 0) {
            res++;
            i++;
        }
    }
    out << res;
    return 0;
}