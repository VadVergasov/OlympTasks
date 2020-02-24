#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("herding.in");
    ofstream out("herding.out");
    int a, b, c;
    in >> a >> b >> c;
    int mn, mx = max(abs(a - b) - 1, abs(b - c) - 1);
    if (min(abs(a - b) - 1, abs(b - c) - 1) == 1) {
        mn = 1;
    } else {
        mn = 2;
    }
    if (a + 1 == b && b + 1 == c) {
        out << "0\n0";
        return 0;
    }
    out << mn << "\n" << mx;
    return 0;
}