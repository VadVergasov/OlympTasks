#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string s, s1;
    cin >> n >> s;
    s1 = s;
    sort(s1.begin(), s1.end());
    if (s1 == s) {
        cout << "NO";
        return 0;
    }
    int mx = 0, pos = 0;
    for (int i = 0; i < s.size(); i++) {
        mx = max(mx, (int)s[i]);
        if (mx == (int)s[i]) {
            pos = i;
        }
        if (s[i] < mx) {
            cout << "YES" << endl << pos + 1 << " " << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}