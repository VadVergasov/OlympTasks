#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, x, y, x0, y0, res = 0;
    bool f = false;
    in >> n >> m >> k >> x >> y;
    for (int i = 0; i < k; i++) {
        in >> x0 >> y0;
        if ((x0 % 2) == (x % 2) && (y0 % 2) == (y % 2) ||
            (x0 % 2) != (x % 2) && (y0 % 2) != (y % 2)) {
            res++;
        }
        if (x0 == x && y0 == y) {
            f = true;
        }
    }
    if (n == 1 && m != 1 && !f || n != 1 && m == 1 && !f) {
        out << 0;
        return 0;
    } else if (f && n == 1 && m != 1 || n != 1 && m == 1) {
        out << 1;
        return 0;
    }
    out << res;
    return 0;
}