#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("stair.in");
    ofstream out("stair.out");
    double x1, x2, y1, y2, a, b, xd, yd;
    in >> x1 >> y1 >> x2 >> y2 >> a >> b;
    if (abs(x1 - x2) / a < 1.0 || abs(x1 - x2) / a - abs(y1 - y2) / b < 0) {
        out << -1;
        return 0;
    }
    xd = abs(x1 - x2);
    yd = abs(y1 - y2);
    int xr1, xr2;
    if (abs(xd / a - (int)(xd) / (int)(a)) < DBL_EPSILON) {
        xr1 = a;
        xr2 = 1;
    } else {
        xr1 = xd;
        xr2 = floor(xd / a);
    }
    if (yd > b * floor(xd / a)) {
        out << -1;
        return 0;
    }
    out << (int)xr1 << " " << (int)xr2 << "\n"
        << (int)yd << " " << (int)floor(xd / a) << "\n";
    return 0;
}