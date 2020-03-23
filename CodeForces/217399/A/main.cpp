#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";
    res += s[0];
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            res = s[i];
            res += s[i + 1];
        }
    }
    char cur = s.front();
    int len = 1;
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] == cur) {
            len++;
        } else {
            if (len > res.size()) {
                res = "";
                for (int j = 0; j < len; j++) {
                    res += cur;
                }
            }
            cur = s[i];
            len = 1;
        }
    }
    if (len > res.size()) {
        res = "";
        for (int j = 0; j < len; j++) {
            res += cur;
        }
    }
    cout << res;
    return 0;
}