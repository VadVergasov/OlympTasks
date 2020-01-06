#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int k = 0; k < q; k++) {
        string s;
        cin >> s;
        int l = 0, r = 0, u = 0, d = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                l++;
            } else if (s[i] == 'R') {
                r++;
            } else if (s[i] == 'U') {
                u++;
            } else {
                d++;
            }
        }
        if (min(l, r) == 0 && min(u, d) == 0) {
            cout << 0 << "\n";
            continue;
        }
        if (min(l, r) == 0) {
            cout << "2\nUD\n";
            continue;
        }
        if (min(u, d) == 0) {
            cout << "2\nLR\n";
            continue;
        }
        cout << min(l, r) * 2 + min(u, d) * 2 << "\n";
        for (int i = 0; i < min(l, r); i++) {
            cout << "L";
        }
        for (int i = 0; i < min(u, d); i++) {
            cout << "U";
        }
        for (int i = 0; i < min(l, r); i++) {
            cout << "R";
        }
        for (int i = 0; i < min(u, d); i++) {
            cout << "D";
        }
        cout << "\n";
    }
    return 0;
}