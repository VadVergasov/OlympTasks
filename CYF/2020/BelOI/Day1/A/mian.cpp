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
    long long n;
    cin >> n;
    for (long long i = 1; i < 1LL << 20; i++) {
        if (ceil(sqrt(n + i * i)) == floor(sqrt(n + i * i))) {
            cout << "Yes\n" << (long long)sqrt(n + i * i) << " " << i;
            return 0;
        }
    }
    cout << "No";
    return 0;
}