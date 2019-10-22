#include <bits/stdc++.h>

using namespace std;

long long binpow(int n, int p, int m) {
    long long ans = 1;
    while (p) {
        cout << p;
        if (p & 1) {
            ans *= n;
            ans %= m;
        }
        p /= 2;
        n *= n;
        n %= m;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long res = 0;
        int l, m;
        cin >> l >> m;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.find(s2) != -1 || s2.find(s1) != -1) {
            res += binpow(26, l - s1.size() - s2.size(), m) +
                   binpow(26, l - max(s1.size(), s2.size()), m);
            cout << res << "\n";
            continue;
        }
        if (s1.size() + s2.size() < l) {
            res += 2 * binpow(26, l - s1.size() - s2.size(), m);
            res %= m;
        }
        cout << res << "\n";
    }
    return 0;
}