#include <bits/stdc++.h>

using namespace std;

int main() {
    long double a, b, c;
    cin >> a >> b >> c;
    if ((int)a + (int)b <= (int)c || (int)a + (int)c <= (int)b ||
        (int)b + (int)c <= (int)a) {
        cout << "Impossible\n";
        return 0;
    }
    pair<long double, long double> f = {0, 0}, s = {0, a}, t;
    long double cos = (a * a + b * b - c * c) / (2 * a * b);
    t.first = b * sqrt(1 - cos * cos);
    t.second = b * cos;
    cout << fixed << setprecision(6) << s.first << " " << s.second << "\n"
         << f.first << " " << f.second << "\n"
         << t.first << " " << t.second << "\n";
    return 0;
}
