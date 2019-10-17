#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        bool cur = false, f = true;
        cin >> n;
        vector<string> s(2);
        cin >> s[0] >> s[1];
        for (int j = 0; j < n; j++) {
            if (s[cur][j] == '1' || s[cur][j] == '2') {
                continue;
            } else if (((s[cur][j] == '3' || s[cur][j] == '4' ||
                         s[cur][j] == '5' || s[cur][j] == '6') &&
                        (s[!cur][j] == '3' || s[!cur][j] == '4' ||
                         s[!cur][j] == '5' || s[!cur][j] == '6'))) {
                cur = !cur;
                continue;
            } else {
                cout << "NO\n";
                f = false;
                break;
            }
        }
        if (!cur && f) {
            cout << "NO\n";
            continue;
        }
        if (f) {
            cout << "YES\n";
        }
    }
    return 0;
}