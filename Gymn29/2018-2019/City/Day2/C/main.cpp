#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, p = 61;
    in >> n;
    vector<vector<unsigned long long>> hashes(n);
    vector<unsigned long long> pn;
    vector<string> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        in >> a[i];
        hashes[i].resize(a[i].size());
        mx = max(mx, (int)a[i].size());
    }
    pn.resize(mx);
    pn[0] = 1;
    for (int i = 1; i < mx; i++) {
        pn[i] = pn[i - 1] * p;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].size(); j++) {
            hashes[i][j] += (a[i][j] - 'a' + 1) * pn[j];
            if (j == 0) {
                continue;
            }
            hashes[i][j] += hashes[i][j - 1];
        }
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long l = 0, r = min(a[i].size(), a[j].size()) - 1;
            while (l <= r) {
                long long m = (l + r) >> 1;
                if (hashes[i][m] == hashes[j][m]) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
            res += (a[i].size() - l) + (a[j].size() - l);
        }
    }
    out << (res << 1);
    return 0;
}