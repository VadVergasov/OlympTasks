#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long a, c, k, m, n, r = 0;
    in >> a >> c >> k >> m >> n;
    string s;
    in >> s;
    for (long long i = 0; i < m; i++) {
        long long z = i;
        string res = "";
        for (long long j = 0; j < n; j++) {
            z = ((z * a + c) / k) % m;
            if (z < m / 2) {
                res += '0';
            } else {
                res += '1';
            }
        }
        if (res == s) {
            r++;
        }
    }
    out << r;
    return 0;
}