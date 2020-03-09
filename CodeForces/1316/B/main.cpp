// https://codeforces.com/contest/1316/problem/B
#include <bits/stdc++.h>

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        string s, s1;
        cin >> s;
        if (n == 1) {
            cout << s << "\n"
                 << "1\n";
            continue;
        }
        s1 = s;
        long long res = 1;
        for (int i = 0; i < n; i++) {
            string tmp = s.substr(i, s.size() - i);
            string prefix = s.substr(0, i);
            if ((n - i) % 2 != 0) {
                reverse(begin(prefix), end(prefix));
            }
            tmp += prefix;
            if (tmp < s1) {
                res = i + 1;
                s1 = tmp;
            }
        }
        s1 = s;
        for (int j = 0; j < n - res + 1; j++) {
            reverse(s1.begin() + j, s1.begin() + res + j);
        }
        reverse(begin(s), end(s));
        if (s < s1) {
            s1 = s;
            res = n;
        }
        cout << s1 << "\n" << res << "\n";
    }
    return 0;
}