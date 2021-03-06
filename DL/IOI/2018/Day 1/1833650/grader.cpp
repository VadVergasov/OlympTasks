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
#include "grader.h"
#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    ifstream in("input.txt");
    int H, W, Q;
    // scanf("%d %d %d\n", &H, &W, &Q);
    in >> H >> W >> Q;
    ints R(H * W), C(H * W);
    for (int i = 0; i < H * W; i++) {
        // scanf("%d %d\n", &(R[i]), &(C[i]));
        in >> R[i] >> C[i];
    }
    ints A(Q), B(Q);
    for (int i = 0; i < Q; i++) {
        // scanf("%d %d\n", &(A[i]), &(B[i]));
        in >> A[i] >> B[i];
    }
    give_initial_chart(H, W, R, C);
    for (int i = 0; i < Q; i++) printf("%d\n", swap_seats(A[i], B[i]));
}
