#include <bits/stdc++.h>
#include "grader.h"

using namespace std;

string guess_sequence(int N) {
    string p = "";
    vector<char> sym;
    if (press("XY") >= 1) {
        if (press("X") == 1) {
            p = "X";
            sym = {'A', 'B', 'Y'};
        } else {
            p = "Y";
            sym = {'A', 'B', 'X'};
        }
    } else {
        if (press("A") == 1) {
            p = "A";
            sym = {'B', 'X', 'Y'};
        } else {
            p = "B";
            sym = {'A', 'X', 'Y'};
        }
    }
    for (int i = 0; i < N - 2; i++) {
        string req = p + sym[0] + sym[0] + p + sym[0] + sym[1] + p + sym[0] +
                     sym[2] + p + sym[2];
        int ret = press(req);
        if (ret == p.size() + 1) {
            p += sym[2];
        } else if (ret == p.size() + 2) {
            p += sym[0];
        } else {
            p += sym[1];
        }
    }
    if (N == 1) {
        return p;
    }
    if (press(p + sym[0]) == N) {
        p += sym[0];
    } else {
        if (press(p + sym[1]) == N) {
            p += sym[1];
        } else {
            p += sym[2];
        }
    }
    return p;
}
