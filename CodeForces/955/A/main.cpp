#include <bits/stdc++.h>

using namespace std;

int main() {
    int hh, mm;
    double h, d, c, m, res1;
    cin >> hh >> mm >> h >> d >> c >> m;
    if (hh < 20) {
        res1 = c * ceil(h / m);
    } else {
        res1 = 0.8 * c * ceil(h / m);
    }
    if (hh < 20) {
        h += (20 - hh) * d * 60;
        if (mm != 0) {
            h -= 60 * d;
        }
        h += abs((60 - mm) % 60 * d);
    }
    cout << fixed << setprecision(4) << min(0.8 * c * ceil(h / m), res1);
    return 0;
}