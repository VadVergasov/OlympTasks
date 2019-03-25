#include <bits/stdc++.h>

using namespace std;

const int p = 31;
const int mod = 1e9 + 7;

vector<long long> pw;
vector<vector<long long> > hashes;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    pw.resize(n);
    hashes.resize(n);
    pw[0] = 1;
    for (int i = 1; i < n; i++) {
        pw[i] = (pw[i - 1] * p) % mod;
    }
    for (int i = 0; i < n; i++) {
        string s;
        in >> s;
        hashes[i].resize(s.size());
        for (int j = 0; j < s.size(); j++) {
            hashes[i][j] = ((s[j] - 'a' + 1) * pw[j]) % mod;
            if (j) {
                hashes[i][j] += hashes[i][j - 1];
            }
            hashes[i][j] %= mod;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
        }
    }
    return 0;
}