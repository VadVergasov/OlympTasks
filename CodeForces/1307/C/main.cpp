// https://codeforces.com/problemset/problem/1307/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<long long> f(26);
    vector<vector<long long> > sec(26, vector<long long>(26));
    for (long long i = 0; i < s.size(); i++) {
        for (long long j = 0; j < 26; j++) {
            sec[j][s[i] - 'a'] += f[j];
        }
        f[s[i] - 'a']++;
    }
    long long mx = 0;
    for (long long i = 0; i < 26; i++) {
        mx = max(mx, f[i]);
        for (long long j = 0; j < 26; j++) {
            mx = max(mx, sec[i][j]);
        }
    }
    cout << mx;
    return 0;
}