#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp, mn = 10e6, res = -10e6;
    in >> n;
    vector<int> a, b(2000002, 0);
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
        b[1000000 + tmp]++;
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != 0) {
            mn = min(mn, b[i]);
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (mn == b[i]) {
            res = max(res, i - 1000000);
        }
    }
    out << res << " " << mn;
    return 0;
}
