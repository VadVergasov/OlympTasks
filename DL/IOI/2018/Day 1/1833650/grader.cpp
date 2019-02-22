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
