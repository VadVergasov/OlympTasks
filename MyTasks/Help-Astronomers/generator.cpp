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
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    long long n = atoll(argv[1]);
    long long M = atoll(argv[2]);
    long long a = atoll(argv[3]);
    long long p = atoll(argv[4]);

    cout << n << " " << M << endl;
    for (int i = 0; i < n; i++) {
        cout << rnd.next(1LL, a) << ' ';
        cout << rnd.next(2LL, p) << endl;
    }
    return 0;
}