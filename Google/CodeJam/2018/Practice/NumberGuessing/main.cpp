#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;
        int n;
        cin >> n;
        l++;
        for (;;) {
            int m = (r + l) / 2;
            cout << m << endl;
            string s;
            cin >> s;
            if (s == "TOO_SMALL") {
                l = m + 1;
            } else if (s == "TOO_BIG") {
                r = m - 1;
            } else if (s == "CORRECT") {
                break;
            }
        }
    }
    return 0;
}