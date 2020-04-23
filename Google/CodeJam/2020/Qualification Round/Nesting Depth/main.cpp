#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        string s, res = "";
        cin >> s;
        int balance = 0;
        for (int i = 0; i < s.size(); i++) {
            while (balance < s[i] - '0') {
                res += "(";
                balance++;
            }
            while (s[i] == s[i + 1]) {
                res += s[i];
                i++;
            }
            res += s[i];
            if (i != s.size() - 1) {
                while (balance > s[i + 1] - '0') {
                    res += ")";
                    balance--;
                }
            } else {
                for (int j = 0; j < s[i] - '0'; j++) {
                    res += ")";
                }
            }
        }
        cout << "Case #" << cur << ": " << res << "\n";
    }
    return 0;
}