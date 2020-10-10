#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int m, w;
    in >> m >> w;
    vector<int> n(m);
    for (int i = 0; i < m; i++) {
        in >> n[i];
    }
    int s, b, t;
    in >> s >> b >> t;
    int day = 0, day_of_week = s;
    if (s < b) {
        day_of_week = b;
        day += b - s;
    } else if (b < s) {
        day_of_week = b;
        day += w - s + b;
    }
    int month = 0, res = 0;
    while (month < m) {
        if (day == t) {
            res++;
        }
        if (day > n[month]) {
            day -= n[month];
            month++;
        }
        day += w;
    }
    out << res;
    return 0;
}