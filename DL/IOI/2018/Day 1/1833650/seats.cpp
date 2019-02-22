#include <bits/stdc++.h>
#include "grader.h"

using namespace std;

ints r, c;
int h, w;

void give_initial_chart(int H, int W, ints R, ints C) {
    r = R;
    c = C;
    h = H;
    w = W;
}

int swap_seats(int a, int b) {
    swap(r[a], r[b]);
    swap(c[a], c[b]);
    vector<vector<int> > table(r.size(), vector<int>(c.size()));
    for (int i = 0; i < r.size(); i++) {
        table[r[i]][c[i]] = i;
    }
    int res = -2;
    set<int> nums;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            nums.insert(table[i][j]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    nums.clear();
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            nums.insert(table[j][i]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    nums.clear();
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            nums.insert(table[i][j]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    nums.clear();
    for (int i = w - 1; i >= 0; i--) {
        for (int j = h - 1; j >= 0; j--) {
            nums.insert(table[j][i]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    return res;
}
