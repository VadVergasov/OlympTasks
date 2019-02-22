#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, m, tmp, tmp1, tmp2, tmp3;
    in >> n >> m;
    vector<int> a, s, f, r;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        in >> tmp1 >> tmp2 >> tmp3;
        s.push_back(tmp1);
        f.push_back(tmp2);
        r.push_back(tmp3);
    }
    for (int i = 0; i < m; i++) {
        int mn = 10e9;
        for (int j = s[i] - 1; j < f[i]; j++) {
            mn = min(mn, abs(a[j] - r[i]));
        }
        int pos = 0;
        for (int j = s[i] - 1; j < f[i]; j++) {
            if (mn == abs(a[j] - r[i])) {
                pos = j + 1;
                break;
            }
        }
        out << pos << "\n";
    }
    return 0;
}
