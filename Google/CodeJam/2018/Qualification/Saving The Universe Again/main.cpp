#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++) {
        bool re = true;
        long long d, damage = 0, p = 1, res = 0;
        cin >> d;
        string s;
        cin >> s;
        for (long long j = 0; j < s.size(); j++) {
            if (s[j] == 'C') {
                p <<= 1;
            } else {
                damage += p;
            }
        }
        cout << "Case #" << i + 1 << ": ";
        while (damage > d) {
            long long l = -1, r = -1;
            for (long long j = s.size() - 1; j > 0; j--) {
                if (s[j] == 'S' && s[j - 1] == 'C') {
                    l = j;
                    r = j - 1;
                    break;
                }
            }
            if (l == -1 || r == -1) {
                cout << "IMPOSSIBLE\n";
                re = false;
                break;
            }
            swap(s[l], s[r]);
            damage = 0, p = 1;
            for (long long j = 0; j < s.size(); j++) {
                if (s[j] == 'C') {
                    p <<= 1;
                } else {
                    damage += p;
                }
            }
            res++;
        }
        if (re) {
            cout << res << "\n";
        }
    }
    return 0;
}