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

unsigned int nextRand17(unsigned int a, unsigned int b) {
    unsigned int cur = 0;
    cur = cur * a + b;
    return cur >> 15;
}

unsigned int nextRand24(unsigned int a, unsigned int b) {
    unsigned int cur = 0;
    cur = cur * a + b;
    return cur >> 8;
}

void init(unsigned int a, unsigned int b, vector<int> &f) {
    unsigned int a, b;
    for (int i = 0; i < 1 << 17; i++) {
        f[i] = nextRand24(a, b);
    }
}

int main() {
    unsigned int q, a, b;
    cin >> q >> a >> b;
    vector<int> f(1 << 17);
    init(a, b, f);
    for (int i = 0; i < q; i++) {
        int l = nextRand17(a, b);
        int r = nextRand17(a, b);
        if (l > r) {
            swap(l, r);
        }
        int x = nextRand24(a, b);
        int y = nextRand24(a, b);
        if (x > y) {
            swap(x, y);
        }
    }
    return 0;
}