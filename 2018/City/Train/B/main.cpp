#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int m, w, tmp, s, b, t, res = 0;
    in >> m >> w;
    vector<int> d;
    for (int i = 0; i < m; i++) {
        in >> tmp;
        d.push_back(tmp);
    }
    in >> s >> b >> t;
    int cur = 1;
    if (s < b) {
        cur += s - b;
    } else {
        cur += w - s + b;
    }
    int i = 0;
    while (i < m) {
        if (cur == t) {
            res++;
        }
        cur += w;
        if (cur > d[i]) {
            cur -= d[i];
            i++;
        }
    }
    out << res;
    return 0;
}
