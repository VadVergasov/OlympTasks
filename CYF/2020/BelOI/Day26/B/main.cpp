#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, c, d;
    in >> n >> c >> d;
    vector<pair<int, int> > f, s;
    for (int i = 0; i < n; i++) {
        int x, y;
        in >> x >> y;
        if (abs(x - c) + abs(y - d) >= c + d) {
            f.push_back({x, y});
        } else {
            s.push_back({x, y});
        }
    }
    long long res = abs(c) + abs(d);
    pair<int, int> cur = {0, 0};
    for (auto i : f) {
        cur.first += i.first;
        cur.second += i.second;
    }
    res = max(res,
              (long long)abs(cur.first - c) + (long long)abs(cur.second - d));
    for (auto i : s) {
        cur.first += i.first;
        cur.second += i.second;
    }
    res = max(res,
              (long long)abs(cur.first - c) + (long long)abs(cur.second - d));
    out << res;
    return 0;
}