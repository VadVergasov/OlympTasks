#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, i, j;
    in >> m >> n >> i >> j;
    long long cur = 1;
    if (i <= j) {
        for (int k = 0; k < i; k++) {
            if (k % 2 == 0) {
                if (k != i - 1) {
                    cur += n - k;
                } else {
                    cur += j - k - 1;
                    out << cur;
                    return 0;
                }
            } else {
                cur += m - k;
                if (k != i - 1) {
                    cur += n - k;
                } else {
                    cur += n - j;
                    out << cur;
                    return 0;
                }
                cur += m - k - 1;
            }
        }
    } else {
        cur = n + 1;
        for (int k = 0; k < j; k++) {
            if (k % 2 == 0) {
                if (k != j - 1) {
                    cur += m - k - 1;
                } else {
                    cur += i - k - 2;
                    out << cur;
                    return 0;
                }
            } else {
                cur += n - k;
                if (k != j - 1) {
                    cur += m - 1 - k;
                } else {
                    cur += m - i;
                    out << cur;
                    return 0;
                }
                cur += n - k - 1;
            }
        }
    }
    return 0;
}