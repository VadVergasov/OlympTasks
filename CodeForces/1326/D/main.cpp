#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, res = "";
        cin >> s;
        if (s.front() != s.back()) {
            for (int i = 0; i < s.size(); i++) {
                bool f = true;
                for (int j = 0; j < ceil((double)i / 2.0); j++) {
                    if (s[j] != s[i - j]) {
                        f = false;
                        break;
                    }
                }
                if (f && res.size() < i + 1) {
                    res = s.substr(0, i + 1);
                }
            }
        } else {
        }
        cout << res << "\n";
    }
    return 0;
}
