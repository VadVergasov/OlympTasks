#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long l, r, month_s, month_e, i = 1, res = 0;
    in >> l >> r;
    while (i / 2.0 * (i + 1) < l) {
        i++;
    }
    month_s = i;
    while (i / 2.0 * (i + 1) < r) {
        i++;
    }
    month_e = i;
    for (i = month_s; i <= month_e; i++) {
        res += i / 2.0 * (i + 1);
    }
    for (i = 0; i < l - (month_s / 2.0 * (month_s + 1) - month_s); i++) {
        res -= i;
    }
    for (i = 0; i < month_e / 2.0 * (month_e + 1) - r; i++) {
        res -= month_e - i;
    }
    out << res;
    return 0;
}