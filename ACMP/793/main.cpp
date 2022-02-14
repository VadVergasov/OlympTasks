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

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    string res = "";
    while (in >> n) {
        int n1 = n, sum1 = 0, sum2 = 0;
        vector<int> p;
        for (int i = 2; i <= sqrt(n); i++) {
            while (n % i == 0) {
                p.push_back(i);
                n /= i;
            }
        }
        if (n > 1 && n != n1) {
            p.push_back(n);
        }
        for (int i = 0; i < p.size(); i++) {
            while (p[i]) {
                sum2 += p[i] % 10;
                p[i] /= 10;
            }
        }
        while (n1) {
            sum1 += n1 % 10;
            n1 /= 10;
        }
        if (sum1 == sum2) {
            out << 1;
        } else {
            out << 0;
        }
    }
    return 0;
}
